/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:29:29 by abourin           #+#    #+#             */
/*   Updated: 2020/07/11 06:43:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int t;
	char c;

	c = 'a';
	t = 50;
	printf("pp %.50d\n", 10000);
	printf("p1 %.4s\n", "cccc");
	printf("p2 %.10s\n", "cccc");
	printf("p3 %.4s\n", NULL);
	printf("p4 %.5s\n", "aaaaa");
	printf("p5 %.3d\n", 100);
	printf("p6 %.0d\n", 100);
	printf("p7 %.4d\n", 100);
	printf("p8 %.10d\n", 100);
	printf("p9 %.50d\n", 100);
	printf("p10 %.1d\n", 100);
	printf("p11 %.3d\n", 100);
	printf("p12 %.0d\n", 0);
	printf("p13 %.3i\n", 100);
	printf("p14 %.0i\n", 100);
	printf("p15 %.4i\n", 100);
	printf("p16 %.10i\n", 100);
	printf("p17 %.50i\n", 100);
	printf("p18 %.1i\n", 100);
	printf("p19 %.3x\n", 100);
	printf("p20 %.0x\n", 0);
	printf("p21 %.3x\n", 100);
	printf("p22 %.0x\n", 100);
	printf("p23 %.4x\n", 100);
	printf("p24 %.10x\n", 100);
	printf("p25 %.50x\n", 100);
	printf("p26 %.1x\n", 100);
	printf("p27 %.3x\n", 100);
	printf("p28 %.0x\n", 0);
	printf("p29 %.3u\n", 100);
	printf("p30 %.0u\n", 100);
	printf("p31 %.4u\n", 100);
	printf("p32 %.10u\n", 100);
	printf("p33 %.50u\n", 100);
	printf("p34 %.1u\n", 100);
	printf("p35 %.3u\n", 100);
	printf("p36 %.0u\n", 0);
	printf("%%\n");
	printf("Hello 42 school! %s\n", NULL);
	printf("%010%\n");
	printf("%d\n", 2147483647);
	printf("%x\n", 2147483647);
	printf("%X\n", 2147483647);
	printf("%x\n", 0);
	printf("%010x\n", 0);
	printf("%010x\n", 20);
	printf("%010x\n", -20);
	printf("%10x\n", 20);
	printf("%10.2x\n", -20);
	printf("%-10x\n", 50);
	printf("%-15x\n", 0);
	printf("%.1x\n", 500);
	printf("%*.*x\n", 50, 10, 2);
	printf("%x\n", -1);
	printf("%40.50d\n", 50);
    printf("%d\n", -589);
    printf("%-4d\n", -2464);
    printf("%.5d\n", -2372);
	printf("%p\n", NULL);
	printf("%15p\n", NULL);
	printf("%-15p\n", NULL);
    printf("ret = %d\n", printf("%%p::[%010d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%10d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%.5d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%01.1d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%010.1d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%01.50d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%1.50d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%0100.50d]\n", -8473));
    printf("ret = %d\n", printf("%%p::[%010d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%10d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%.5d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%01.1d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%010.1d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%01.50d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%1.50d]\n", 8473));
    printf("ret = %d\n", printf("%%p::[%0100.50d]\n", 8473));
	printf("%c\n", 'a');
	printf("%10c\n", 't');
	printf("%1c\n", 'y');
	printf("%50.2s\n", "Coucou");
	printf("%50.2s\n", NULL);
	printf("%5.0s\n", "Hello");
	printf("%.1s\n", "Test");
	printf("%10s\n", NULL);
	printf("%10s\n", "Ok");
	printf("%d\n", printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
	printf("%d\n", printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
	printf("t1 %050d\n", 10);
	printf("t2 %-50d\n", 10);
	printf("t3 %50.0d\n", 10);
	printf("t4 %50.50d\n", 10);
	printf("t5 %50.10d\n", 10);
	printf("t6 %*.*d\n", 50,  5, 10);
	printf("t7 %1.50d\n", -10);
	printf("t8 %1.50d\n", 10);
	printf("t9 %2.2d\n", 10);
	printf("t10 %2.2d\n", -10);
	printf("t12 %.0d\n", 0);
	printf("t13 %01d\n", -20);
	printf("t14 %10d\n", 1000);
	printf("%d\n", printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42));
	printf("%d\n", printf("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
	printf("%d\n", printf("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
	printf("%d\n", printf("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
	printf("%d\n", printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
	printf("%d\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	printf("%d\n", printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n", 42, -42));
	printf("%d\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	printf("%d\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	printf("%d\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	printf("%d\n", printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
	printf("%d\n", printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	printf("%d\n", printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	printf("%d\n", printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	printf("%d\n", printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	printf("%d\n", printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	printf("%d\n", printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	printf("%d\n", printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	printf("%d\n", printf("%%\n")); 
	printf("%d\n", printf("%-.12u\n", -20000000));
	printf("%d\n", printf("%-.12i\n", -20000000));
	printf("%d\n", printf("truc\n"));
	printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	printf("31 This is an int : %.0d\n", 0);
	printf("32 This is an int : %0d\n", 0);
	printf("percent 1 %012%\n");
	printf("percent 2 %12%\n");
	printf("percent 3 %-12%\n");
	printf("percent 4 %0%\n");
	printf("%d\n", t);
	printf("%d\n", t);
	printf("%d\n", t);
	printf("%d\n", t);
	printf("%d\n", t);
	printf("%d\n", t);
	printf("%d\n", t);
	printf("%d\n", t);
	printf("%d\n", printf("1string 1 %s string 2 %s\n", "toto", "bonjour"));
	printf("%d\n", printf("4string 1 %12s string 2 %12s\n", "toto", "bonjour"));
	printf("%d\n", printf("4string 1 %-12s string 2 %-12s\n", "toto", "bonjour"));
	printf("st1 %*.*d\n", 10, 10, 50);
	printf("st2 %*.*d\n", 1, 50, 50);
	printf("st3 %*.*d\n", 0, 0, 50);
	printf("st4 %*.*d\n", 0, 50, 50);
	printf("st5 %*.*d\n", 10, 0, 50);
	printf("st6 %*.*d\n", 10, 10, 50);
	printf("st12 %*d\n", 10, 50);
	printf("st13 %*d\n", 0, 0);
	printf("st14 %.*d\n", 0, 0);
	printf("st15 %*d\n", 50, 5);
	printf("st16 %0.*d\n", 50, 5);
	printf("st17 %0.*d\n", 0, 0);
	printf("st7 %*.*s\n", 1, 50, "hey");
	printf("st8 %*.*s\n", 0, 0, "coucou");
	printf("st9 %*.*s\n", 0, 50, "hey");
	printf("st10 %*.*s\n", 10, 0, "dsa");
	printf("st11 %*.*s\n", 10, 10, "hello");
	printf("st8 %.*s\n", 0, "coucou");
	printf("st9 %*s\n", 0, "hey");
	printf("st10 %*s\n", 10, "dsa");
	printf("st118 %*s\n", 100, "hello");
	printf("st119 %*s\n", 1000, "hello");
	printf("st120 %*s\n", 10000, "hello");
	printf("st121 %*s\n", 100000, "hello");
	printf("st118 %*d\n", 100, 0);
	printf("st119 %*d\n", 1000, 10);
	printf("st120 %*d\n", 10000, 467);
	printf("st121 %*d\n", 100000, -589);
	printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
	printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	printf("ultimate5 %*.*u\n", 1, 50, 5000);
	printf("neg1 %*s\n", -9, "coucou");
	printf("neg2 %*.*s\n", -9, 4, "coucou");
	printf("neg3 %*s\n", -9, NULL);
	printf("neg4 %*.*s\n", 0, 0, "coucou");
	printf("neg5 %*s\n", -100, "coucou");
	printf("neg6 %*s\n", -156, "coucou");
	printf("neg7 %*.*s\n", -1586, 15, "coucou");
	printf("neg8 %*.*s\n", -1586, 15, "coucou");
	printf("neg9 %*.*s\n", 15856, 155, "coucou");
	printf("neg10 %*.*s\n", -15586, 15, "coucou");
	printf("neg11 %*.*s\n", -15586, 15, "coucou");
	printf("neg1 %*d\n", -9, 150);
	printf("neg2 %*.*d\n", -9, 4, 1555);
	printf("neg3 %*d\n", -9, -255);
	printf("neg4 %*.*d\n", 0, 0, -30);
	printf("neg5 %*d\n", -100, -589);
	printf("neg6 %*d\n", -156, 15555);
	printf("neg7 %*.*d\n", -1586, 15, 0);
	printf("neg8 %*.*d\n", -1586, 15, 300);
	printf("neg9 %*.*d\n", 15856, 155, -3000);
	printf("neg10 %*.*d\n", -15586, 15, 150);
	printf("neg11 %*.*d\n", -15586, 15, 0);
	printf("***************%*s%*d**************%*u*************\n", 10, "coucou", 10, 10, -50, 20);
	printf("taaa %100s\n", "hello");
	printf("add0001 [%010.c]\n", 'c');
	printf("add0002 [%010.0c]\n", 'c');
	printf("add0003 [%-10.c]\n", 'c');
	printf("add0004 [%-10.0c]\n", 'c');
	printf("add0005 [%010.c]\n", 'c');
	printf("add0101 [%010.s]\n", "abc");
	printf("add0102 [%010.0s]\n", "abc");
	printf("add0103 [%-10.s]\n", "abc");
	printf("add0104 [%-10.0s]\n", "abc");
	printf("add0105 [%010.s]\n", "abc");
	printf("add0106 [%02.s]\n", "abc");
	printf("add0107 [%02.0s]\n", "abc");
	printf("add0108 [%-2.s]\n", "abc");
	printf("add0109 [%-2.0s]\n", "abc");
	printf("add0110 [%02.s]\n", "abc");
	printf("add0111 [%010.2s]\n", "abc");
	printf("add0112 [%010.2s]\n", "abc");
	printf("add0113 [%-10.2s]\n", "abc");
	printf("add0114 [%-10.2s]\n", "abc");
	printf("add0115 [%010.2s]\n", "abc");
	printf("add0116 [%02.2s]\n", "abc");
	printf("add0117 [%02.2s]\n", "abc");
	printf("add0118 [%-2.2s]\n", "abc");
	printf("add0119 [%-2.2s]\n", "abc");
	printf("add0120 [%02.2s]\n", "abc");
	printf("add0121 [%02.3s]\n", "abc");
	printf("add0122 [%02.3s]\n", "abc");
	printf("add0123 [%-2.3s]\n", "abc");
	printf("add0124 [%-2.3s]\n", "abc");
	printf("add0125 [%02.3s]\n", "abc");
	printf("add0131 [%010.s]\n", "");
	printf("add0132 [%010.0s]\n", "");
	printf("add0133 [%-10.s]\n", "");
	printf("add0134 [%-10.0s]\n", "");
	printf("add0135 [%010.s]\n", "");
	printf("add0136 [%02.s]\n", "");
	printf("add0137 [%02.0s]\n", "");
	printf("add0138 [%-2.s]\n", "");
	printf("add0139 [%-2.0s]\n", "");
	printf("add0140 [%02.s]\n", "");
	printf("add0141 [%010.2s]\n", "");
	printf("add0142 [%010.2s]\n", "");
	printf("add0143 [%-10.2s]\n", "");
	printf("add0144 [%-10.2s]\n", "");
	printf("add0145 [%010.2s]\n", "");
	printf("add0146 [%02.2s]\n", "");
	printf("add0147 [%02.2s]\n", "");
	printf("add0148 [%-2.2s]\n", "");
	printf("add0149 [%-2.2s]\n", "");
	printf("add0150 [%02.2s]\n", "");
	printf("add0151 [%02.3s]\n", "");
	printf("add0152 [%02.3s]\n", "");
	printf("add0153 [%-2.3s]\n", "");
	printf("add0154 [%-2.3s]\n", "");
	printf("add0155 [%02.3s]\n", "");
	printf("add0160 [%*s]\n", 10, "abc");
	printf("add0161 [%*s]\n", 3, "abc");
	printf("add0162 [%*s]\n", 2, "abc");
	printf("add0163 [%*s]\n", 0, "abc");
	printf("add0164 [%*s]\n", -1, "abc");
	printf("add0165 [%.*s]\n", 10, "abc");
	printf("add0166 [%.*s]\n", 3, "abc");
	printf("add0167 [%.*s]\n", 2, "abc");
	printf("add0168 [%.*s]\n", 0, "abc");
	printf("add0169 [%.*s]\n", -1, "abc");
	printf("add0170 [%*.*s]\n", 10, 10, "abc");
	printf("add0171 [%*.*s]\n", 10, 3, "abc");
	printf("add0172 [%*.*s]\n", 10, 2, "abc");
	printf("add0173 [%*.*s]\n", 10, 0, "abc");
	printf("add0174 [%*.*s]\n", 10, -1, "abc");
	printf("add0202 [%010.0p]\n", c);
	printf("add0203 [%-10.p]\n", c);
	printf("add0204 [%-10.0p]\n", c);
	printf("add0205 [%010.p]\n", c);
	printf("add0206 [%02.p]\n", c);
	printf("add0207 [%02.0p]\n", c);
	printf("add0208 [%-2.p]\n", c);
	printf("add0209 [%-2.0p]\n", c);
	printf("add0210 [%02.p]\n", c);
	printf("add0211 [%010.2p]\n", c);
	printf("add0212 [%010.2p]\n", c);
	printf("add0213 [%-10.2p]\n", c);
	printf("add0214 [%-10.2p]\n", c);
	printf("add0215 [%010.2p]\n", c);
	printf("add0216 [%02.2p]\n", c);
	printf("add0217 [%02.2p]\n", c);
	printf("add0218 [%-2.2p]\n", c);
	printf("add0219 [%-2.2p]\n", c);
	printf("add0220 [%02.2p]\n", c);
	printf("add0221 [%02.3p]\n", c);
	printf("add0222 [%02.3p]\n", c);
	printf("add0223 [%-2.3p]\n", c);
	printf("add0224 [%-2.3p]\n", c);
	printf("add0225 [%02.3p]\n", c);
	printf("add0260 [%*p]\n", 10, c);
	printf("add0261 [%*p]\n", 3, c);
	printf("add0262 [%*p]\n", 2, c);
	printf("add0263 [%*p]\n", 0, c);
	printf("add0264 [%*p]\n", -1, c);
	printf("add0265 [%.*p]\n", 10, c);
	printf("add0266 [%.*p]\n", 3, c);
	printf("add0267 [%.*p]\n", 2, c);
	printf("add0268 [%.*p]\n", 0, c);
	printf("add0269 [%.*p]\n", -1, c);
	printf("add0270 [%*.*p]\n", 10, 10, c);
	printf("add0271 [%*.*p]\n", 10, 3, c);
	printf("add0272 [%*.*p]\n", 10, 2, c);
	printf("add0273 [%*.*p]\n", 10, 0, c);
	printf("add0274 [%*.*p]\n", 10, -1, c);	
	printf("add0301 [%010.p]\n", NULL);
	printf("add0302 [%010.0p]\n", NULL);
	printf("add0303 [%-10.p]\n", NULL);
	printf("add0304 [%-10.0p]\n", NULL);
	printf("add0305 [%010.p]\n", NULL);
	printf("add0306 [%02.p]\n", NULL);
	printf("add0307 [%02.0p]\n", NULL);
	printf("add0308 [%-2.p]\n", NULL);
	printf("add0309 [%-2.0p]\n", NULL);
	printf("add0310 [%02.p]\n", NULL);
	printf("add0311 [%010.2p]\n", NULL);
	printf("add0312 [%010.2p]\n", NULL);
	printf("add0313 [%-10.2p]\n", NULL);
	printf("add0314 [%-10.2p]\n", NULL);
	printf("add0315 [%010.2p]\n", NULL);
	printf("add0316 [%02.2p]\n", NULL);
	printf("add0317 [%02.2p]\n", NULL);
	printf("add0318 [%-2.2p]\n", NULL);
	printf("add0319 [%-2.2p]\n", NULL);
	printf("add0320 [%02.2p]\n", NULL);
	printf("add0321 [%02.3p]\n", NULL);
	printf("add0322 [%02.3p]\n", NULL);
	printf("add0323 [%-2.3p]\n", NULL);
	printf("add0324 [%-2.3p]\n", NULL);
	printf("add0325 [%02.3p]\n", NULL);
	printf("add0360 [%*p]\n", 10, NULL);
	printf("add0361 [%*p]\n", 3, NULL);
	printf("add0362 [%*p]\n", 2, NULL);
	printf("add0363 [%*p]\n", 0, NULL);
	printf("add0364 [%*p]\n", -1, NULL);
	printf("add0365 [%.*p]\n", 10, NULL);
	printf("add0366 [%.*p]\n", 3, NULL);
	printf("add0367 [%.*p]\n", 2, NULL);
	printf("add0368 [%.*p]\n", 0, NULL);
	printf("add0369 [%.*p]\n", -1, NULL);
	printf("add0370 [%*.*p]\n", 10, 10, NULL);
	printf("add0371 [%*.*p]\n", 10, 3, NULL);
	printf("add0372 [%*.*p]\n", 10, 2, NULL);
	printf("add0373 [%*.*p]\n", 10, 0, NULL);
	printf("add0374 [%*.*p]\n", 10, -1, NULL);
	printf("add0401 [%010.d]\n", 123);
	printf("add0402 [%010.0d]\n", 123);
	printf("add0403 [%-10.d]\n", 123);
	printf("add0404 [%-10.0d]\n", 123);
	printf("add0405 [%010.d]\n", 123);
	printf("add0406 [%02.d]\n", 123);
	printf("add0407 [%02.0d]\n", 123);
	printf("add0408 [%-2.d]\n", 123);
	printf("add0409 [%-2.0d]\n", 123);
	printf("add0410 [%02.d]\n", 123);
	printf("add0411 [%010.2d]\n", 123);
	printf("add0412 [%010.2d]\n", 123);
	printf("add0413 [%-10.2d]\n", 123);
	printf("add0414 [%-10.2d]\n", 123);
	printf("add0415 [%010.2d]\n", 123);
	printf("add0416 [%02.2d]\n", 123);
	printf("add0417 [%02.2d]\n", 123);
	printf("add0418 [%-2.2d]\n", 123);
	printf("add0419 [%-2.2d]\n", 123);
	printf("add0420 [%02.2d]\n", 123);
	printf("add0421 [%02.3d]\n", 123);
	printf("add0422 [%02.3d]\n", 123);
	printf("add0423 [%-2.3d]\n", 123);
	printf("add0424 [%-2.3d]\n", 123);
	printf("add0425 [%02.3d]\n", 123);
	printf("add0431 [%010.d]\n", -123);
	printf("add0432 [%010.0d]\n", -123);
	printf("add0433 [%-10.d]\n", -123);
	printf("add0434 [%-10.0d]\n", -123);
	printf("add0435 [%010.d]\n", -123);
	printf("add0436 [%02.d]\n", -123);
	printf("add0437 [%02.0d]\n", -123);
	printf("add0438 [%-2.d]\n", -123);
	printf("add0439 [%-2.0d]\n", -123);
	printf("add0440 [%02.d]\n", -123);
	printf("add0441 [%010.2d]\n", -123);
	printf("add0442 [%010.2d]\n", -123);
	printf("add0443 [%-10.2d]\n", -123);
	printf("add0444 [%-10.2d]\n", -123);
	printf("add0445 [%010.2d]\n", -123);
	printf("add0446 [%02.2d]\n", -123);
	printf("add0447 [%02.2d]\n", -123);
	printf("add0448 [%-2.2d]\n", -123);
	printf("add0449 [%-2.2d]\n", -123);
	printf("add0450 [%02.2d]\n", -123);
	printf("add0451 [%02.3d]\n", -123);
	printf("add0452 [%02.3d]\n", -123);
	printf("add0453 [%-2.3d]\n", -123);
	printf("add0454 [%-2.3d]\n", -123);
	printf("add0455 [%02.3d]\n", -123);
	printf("add0461 [%010.d]\n", 0);
	printf("add0462 [%010.0d]\n", 0);
	printf("add0463 [%-10.d]\n", 0);
	printf("add0464 [%-10.0d]\n", 0);
	printf("add0465 [%010.d]\n", 0);
	printf("add0466 [%02.d]\n", 0);
	printf("add0467 [%02.0d]\n", 0);
	printf("add0468 [%-2.d]\n", 0);
	printf("add0469 [%-2.0d]\n", 0);
	printf("add0470 [%02.d]\n", 0);
	printf("add0471 [%010.2d]\n", 0);
	printf("add0472 [%010.2d]\n", 0);
	printf("add0473 [%-10.2d]\n", 0);
	printf("add0474 [%-10.2d]\n", 0);
	printf("add0475 [%010.2d]\n", 0);
	printf("add0476 [%02.2d]\n", 0);
	printf("add0477 [%02.2d]\n", 0);
	printf("add0478 [%-2.2d]\n", 0);
	printf("add0479 [%-2.2d]\n", 0);
	printf("add0480 [%02.2d]\n", 0);
	printf("add0481 [%02.3d]\n", 0);
	printf("add0482 [%02.3d]\n", 0);
	printf("add0483 [%-2.3d]\n", 0);
	printf("add0484 [%-2.3d]\n", 0);
	printf("add0485 [%02.3d]\n", 0);
	printf("add0490 [%d]\n", INT_MAX);
	printf("add0491 [%d]\n", INT_MIN);
	printf("add0760 [%*d]\n", 10, 123);
	printf("add0761 [%*d]\n", 3, 123);
	printf("add0762 [%*d]\n", 2, 123);
	printf("add0763 [%*d]\n", 0, 123);
	printf("add0764 [%*d]\n", -1, 123);
	printf("add0765 [%.*d]\n", 10, 123);
	printf("add0766 [%.*d]\n", 3, 123);
	printf("add0767 [%.*d]\n", 2, 123);
	printf("add0768 [%.*d]\n", 0, 123);
	printf("add0769 [%.*d]\n", -1, 123);
	printf("add0770 [%*.*d]\n", 10, 10, 123);
	printf("add0771 [%*.*d]\n", 10, 3, 123);
	printf("add0772 [%*.*d]\n", 10, 2, 123);
	printf("add0773 [%*.*d]\n", 10, 0, 123);
	printf("add0774 [%*.*d]\n", 10, -1, 123);	
	printf("add0501 [%010.u]\n", 123);
	printf("add0502 [%010.0u]\n", 123);
	printf("add0503 [%-10.u]\n", 123);
	printf("add0504 [%-10.0u]\n", 123);
	printf("add0505 [%010.u]\n", 123);
	printf("add0506 [%02.u]\n", 123);
	printf("add0507 [%02.0u]\n", 123);
	printf("add0508 [%-2.u]\n", 123);
	printf("add0509 [%-2.0u]\n", 123);
	printf("add0510 [%02.u]\n", 123);
	printf("add0511 [%010.2u]\n", 123);
	printf("add0512 [%010.2u]\n", 123);
	printf("add0513 [%-10.2u]\n", 123);
	printf("add0514 [%-10.2u]\n", 123);
	printf("add0515 [%010.2u]\n", 123);
	printf("add0516 [%02.2u]\n", 123);
	printf("add0517 [%02.2u]\n", 123);
	printf("add0518 [%-2.2u]\n", 123);
	printf("add0519 [%-2.2u]\n", 123);
	printf("add0520 [%02.2u]\n", 123);
	printf("add0521 [%02.3u]\n", 123);
	printf("add0522 [%02.3u]\n", 123);
	printf("add0523 [%-2.3u]\n", 123);
	printf("add0524 [%-2.3u]\n", 123);
	printf("add0525 [%02.3u]\n", 123);
	printf("add0531 [%010.u]\n", -123);
	printf("add0532 [%010.0u]\n", -123);
	printf("add0533 [%-10.u]\n", -123);
	printf("add0534 [%-10.0u]\n", -123);
	printf("add0535 [%010.u]\n", -123);
	printf("add0536 [%02.u]\n", -123);
	printf("add0537 [%02.0u]\n", -123);
	printf("add0538 [%-2.u]\n", -123);
	printf("add0539 [%-2.0u]\n", -123);
	printf("add0540 [%02.u]\n", -123);
	printf("add0541 [%010.2u]\n", -123);
	printf("add0542 [%010.2u]\n", -123);
	printf("add0543 [%-10.2u]\n", -123);
	printf("add0544 [%-10.2u]\n", -123);
	printf("add0545 [%010.2u]\n", -123);
	printf("add0546 [%02.2u]\n", -123);
	printf("add0547 [%02.2u]\n", -123);
	printf("add0548 [%-2.2u]\n", -123);
	printf("add0549 [%-2.2u]\n", -123);
	printf("add0550 [%02.2u]\n", -123);
	printf("add0551 [%02.3u]\n", -123);
	printf("add0552 [%02.3u]\n", -123);
	printf("add0553 [%-2.3u]\n", -123);
	printf("add0554 [%-2.3u]\n", -123);
	printf("add0555 [%02.3u]\n", -123);
	printf("add0561 [%010.u]\n", 0);
	printf("add0562 [%010.0u]\n", 0);
	printf("add0563 [%-10.u]\n", 0);
	printf("add0564 [%-10.0u]\n", 0);
	printf("add0565 [%010.u]\n", 0);
	printf("add0566 [%02.u]\n", 0);
	printf("add0567 [%02.0u]\n", 0);
	printf("add0568 [%-2.u]\n", 0);
	printf("add0569 [%-2.0u]\n", 0);
	printf("add0570 [%02.u]\n", 0);
	printf("add0571 [%010.2u]\n", 0);
	printf("add0572 [%010.2u]\n", 0);
	printf("add0573 [%-10.2u]\n", 0);
	printf("add0574 [%-10.2u]\n", 0);
	printf("add0575 [%010.2u]\n", 0);
	printf("add0576 [%02.2u]\n", 0);
	printf("add0577 [%02.2u]\n", 0);
	printf("add0578 [%-2.2u]\n", 0);
	printf("add0579 [%-2.2u]\n", 0);
	printf("add0580 [%02.2u]\n", 0);
	printf("add0581 [%02.3u]\n", 0);
	printf("add0582 [%02.3u]\n", 0);
	printf("add0583 [%-2.3u]\n", 0);
	printf("add0584 [%-2.3u]\n", 0);
	printf("add0585 [%02.3u]\n", 0);
	printf("add0590 [%u]\n", INT_MAX);
	printf("add0591 [%u]\n", INT_MIN);
	printf("add0860 [%*u]\n", 10, 123);
	printf("add0861 [%*u]\n", 3, 123);
	printf("add0862 [%*u]\n", 2, 123);
	printf("add0863 [%*u]\n", 0, 123);
	printf("add0864 [%*u]\n", -1, 123);
	printf("add0865 [%.*u]\n", 10, 123);
	printf("add0866 [%.*u]\n", 3, 123);
	printf("add0867 [%.*u]\n", 2, 123);
	printf("add0868 [%.*u]\n", 0, 123);
	printf("add0869 [%.*u]\n", -1, 123);
	printf("add0870 [%*.*u]\n", 10, 10, 123);
	printf("add0871 [%*.*u]\n", 10, 3, 123);
	printf("add0872 [%*.*u]\n", 10, 2, 123);
	printf("add0873 [%*.*u]\n", 10, 0, 123);
	printf("add0874 [%*.*u]\n", 10, -1, 123);
	printf("add0601 [%010.x]\n", 123);
	printf("add0602 [%010.0x]\n", 123);
	printf("add0603 [%-10.x]\n", 123);
	printf("add0604 [%-10.0x]\n", 123);
	printf("add0605 [%010.x]\n", 123);
	printf("add0606 [%02.x]\n", 123);
	printf("add0607 [%02.0x]\n", 123);
	printf("add0608 [%-2.x]\n", 123);
	printf("add0609 [%-2.0x]\n", 123);
	printf("add0610 [%02.x]\n", 123);
	printf("add0611 [%010.2x]\n", 123);
	printf("add0612 [%010.2x]\n", 123);
	printf("add0613 [%-10.2x]\n", 123);
	printf("add0614 [%-10.2x]\n", 123);
	printf("add0615 [%010.2x]\n", 123);
	printf("add0616 [%02.2x]\n", 123);
	printf("add0617 [%02.2x]\n", 123);
	printf("add0618 [%-2.2x]\n", 123);
	printf("add0619 [%-2.2x]\n", 123);
	printf("add0620 [%02.2x]\n", 123);
	printf("add0621 [%02.3x]\n", 123);
	printf("add0622 [%02.3x]\n", 123);
	printf("add0623 [%-2.3x]\n", 123);
	printf("add0624 [%-2.3x]\n", 123);
	printf("add0625 [%02.3x]\n", 123);
	printf("add0631 [%010.x]\n", -123);
	printf("add0632 [%010.0x]\n", -123);
	printf("add0633 [%-10.x]\n", -123);
	printf("add0634 [%-10.0x]\n", -123);
	printf("add0635 [%010.x]\n", -123);
	printf("add0636 [%02.x]\n", -123);
	printf("add0637 [%02.0x]\n", -123);
	printf("add0638 [%-2.x]\n", -123);
	printf("add0639 [%-2.0x]\n", -123);
	printf("add0640 [%02.x]\n", -123);
	printf("add0641 [%010.2x]\n", -123);
	printf("add0642 [%010.2x]\n", -123);
	printf("add0643 [%-10.2x]\n", -123);
	printf("add0644 [%-10.2x]\n", -123);
	printf("add0645 [%010.2x]\n", -123);
	printf("add0646 [%02.2x]\n", -123);
	printf("add0647 [%02.2x]\n", -123);
	printf("add0648 [%-2.2x]\n", -123);
	printf("add0649 [%-2.2x]\n", -123);
	printf("add0650 [%02.2x]\n", -123);
	printf("add0651 [%02.3x]\n", -123);
	printf("add0652 [%02.3x]\n", -123);
	printf("add0653 [%-2.3x]\n", -123);
	printf("add0654 [%-2.3x]\n", -123);
	printf("add0655 [%02.3x]\n", -123);
	printf("add0661 [%010.x]\n", 0);
	printf("add0662 [%010.0x]\n", 0);
	printf("add0663 [%-10.x]\n", 0);
	printf("add0664 [%-10.0x]\n", 0);
	printf("add0665 [%010.x]\n", 0);
	printf("add0666 [%02.x]\n", 0);
	printf("add0667 [%02.0x]\n", 0);
	printf("add0668 [%-2.x]\n", 0);
	printf("add0669 [%-2.0x]\n", 0);
	printf("add0670 [%02.x]\n", 0);
	printf("add0671 [%010.2x]\n", 0);
	printf("add0672 [%010.2x]\n", 0);
	printf("add0673 [%-10.2x]\n", 0);
	printf("add0674 [%-10.2x]\n", 0);
	printf("add0675 [%010.2x]\n", 0);
	printf("add0676 [%02.2x]\n", 0);
	printf("add0677 [%02.2x]\n", 0);
	printf("add0678 [%-2.2x]\n", 0);
	printf("add0679 [%-2.2x]\n", 0);
	printf("add0680 [%02.2x]\n", 0);
	printf("add0681 [%02.3x]\n", 0);
	printf("add0682 [%02.3x]\n", 0);
	printf("add0683 [%-2.3x]\n", 0);
	printf("add0684 [%-2.3x]\n", 0);
	printf("add0685 [%02.3x]\n", 0);
	printf("add0690 [%x]\n", INT_MAX);
	printf("add0691 [%x]\n", INT_MIN);
	printf("add0960 [%*x]\n", 10, 123);
	printf("add0961 [%*x]\n", 3, 123);
	printf("add0962 [%*x]\n", 2, 123);
	printf("add0963 [%*x]\n", 0, 123);
	printf("add0964 [%*x]\n", -1, 123);
	printf("add0965 [%.*x]\n", 10, 123);
	printf("add0966 [%.*x]\n", 3, 123);
	printf("add0967 [%.*x]\n", 2, 123);
	printf("add0968 [%.*x]\n", 0, 123);
	printf("add0969 [%.*x]\n", -1, 123);
	printf("add0970 [%*.*x]\n", 10, 10, 123);
	printf("add0971 [%*.*x]\n", 10, 3, 123);
	printf("add0972 [%*.*x]\n", 10, 2, 123);
	printf("add0973 [%*.*x]\n", 10, 0, 123);
	printf("add0974 [%*.*x]\n", 10, -1, 123);
}
