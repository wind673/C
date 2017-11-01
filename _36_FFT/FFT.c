#include <stdint.h>
#include <math.h>
#include "FFT.h"


float sin_table[FFT_LENGTH_MAX];
float cos_table[FFT_LENGTH_MAX];


/*
 * Return:      void
 * Parameters:  Databuff:��������; N:����
 * Description: ��2FFT�任
 */
void fft(FFT_E *Databuff, uint32_t N)
{
    uint32_t m = fftLog2(N);
    static uint32_t N_temp = 0;
    uint32_t i, j = N / 2, l, j_down;
    uint32_t x, y = N / 2, X_number, Y_number;
    FFT_E temp, Wnk;

    if(N_temp != N)
    {
        for(i=0; i<N; ++i)
        {
            sin_table[i] = sin(2.0f * FFT_PI * i / N);
            cos_table[i] = cos(2.0f * FFT_PI * i / N);
        }

        N_temp = N;
    }


    /* �������� */
    for(i=1; i<N; ++i)
    {
        if(i < j)
        {
            temp = Databuff[i];
            Databuff[i] = Databuff[j];
            Databuff[j] = temp;
        }
        x = y;
        while(j & x)
        {
            j -= x;
            x >>= 1;
        }
        j |= x;
    }

    /* FFT���ĵ����㷨 */
    for(l=0; l<m; ++l)                  //һ��ѭ����m���ļ�����ѭ��
    {
        X_number = 1 << l;              //��ǰl������X_number��������ת����
        Y_number = 1 << (m - l - 1);    //��ǰl������Y_number����ͬ����ת����
        i = 0;                          //i��0��ÿ��l����ʼ����������ʱ���Ǵӵ�0��Ԫ�ؿ�ʼ

        for(x=0; x<X_number; ++x)       //����ѭ������ÿ��l���µ�ÿ����ͬ��ת����
        {
            /* �������������������ݵ��±� */
            j = i;
            j_down = j + X_number;

            /* ��ת���ӱ任 */
            Wnk.real = cos_table[x * Y_number];     //Wnk.real = cos(2.0 * FFT_PI / N * x * Y_number);
            Wnk.imag = -sin_table[x * Y_number];    //Wnk.imag = -sin(2.0 * FFT_PI / N * x * Y_number);

            for(y=0; y<Y_number; ++y)   //����ѭ����ÿ����Ӧ����ת��������������
            {
                /* �������� */
                temp.real = Databuff[j_down].real * Wnk.real - Databuff[j_down].imag * Wnk.imag;
                temp.imag = Databuff[j_down].real * Wnk.imag + Databuff[j_down].imag * Wnk.real;
                Databuff[j_down].real = Databuff[j].real - temp.real;
                Databuff[j_down].imag = Databuff[j].imag - temp.imag;
                Databuff[j].real += temp.real;
                Databuff[j].imag += temp.imag;

                /* ��������������±� */
                j += (X_number << 1);   //�¸���ͬ����ת�������ڵ�ǰ��Ԫ�ر���ϼ�X_number������
                j_down = j + X_number;
            }

            ++i;                        //��ǰl�������鲻ͬ����ת���ӿ�ʼ������ڵ�ǰ��ת���ӿ�ʼ����ϼ�1
        }
    }
}

/*
 * Return:      void
 * Parameters:  Databuff:��������; N:����
 * Description: ��2FFT��任
 */
void ifft(FFT_E *Databuff, uint32_t N)
{
    uint32_t i;

    /* �任Ϊ����� */
    for(i=0; i<N; ++i)
    {
        Databuff[i].imag = -Databuff[i].imag;
    }

    /* FFT�任 */
    fft(Databuff, N);

    /* �任Ϊ����Ժ��ٳ������г��� */
    for(i=0; i<N; ++i)
    {
        Databuff[i].real = Databuff[i].real / N;
        Databuff[i].imag = -Databuff[i].imag / N;
    }
}

/*
 * Return:      log2(N)
 * Parameters:  N:����
 * Description: ��log2(N)
 */
uint32_t fftLog2(uint32_t N)
{
    uint32_t i = 0;

    while(N >>= 1)
        ++i;

    return i;
}
