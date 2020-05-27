#include <stdio.h>
#include <math.h>
#include <conio.h>
//InterGroup soft and hardware incorporated, 2013
//ИнтерГруп софт энд хардвэйр инкорпорэйтид, 2013
int main()
{
	int i,ii,j=0,nF,nM;
	double dM;
	double fH[15];
	int intB,intD,intF,nJ;
	double fS,f1,f2,fM;
	char cO;
	fM=0.1234567890;
	fS=0.1234567890;
	printf("(C)InterMasterFly\n(R)InterMasterFly, InterGroup\nAll rights reserved!\n");
	printf("It is text calculator v.1.5.\n");
	printf("You can use +,-,*,/,%%,0@0 or 1@1\n(0-the table of multiplication, 1 or greater-the table of degrees),M(memory)\nand #(square root or degree).\nTip: if you want find root, enter second number 0.\nIf you want to find the degree, enter a second number-degree.\nIf you want close calculator, enter \"1q1\"\nIf you want view help, enter\"1h1\"\n");
	printf("Memory tools help:\n1-\"+\"\n2-\"-\"\n3-\"*\"\n4-\"/\"\n5-\"%\"\n6-set memory\n7-view memory(but first number must be and may be random)\n8-clear memory(but first number must be and may be random)\n9-view history of memory\n(but first number must be and may be random)\n10-clear history(but first number must be and may be random)\n11-set in memory summ\n12-set in current memory element of histry\n\a");
	for (i=1;i<2;i)
	{
		scanf_s("%lf%c%lf", &f1,&cO,&f2);
		switch (cO)
		{
			case 'h':
				printf("You can use +,-,*,/,%%,0@0 or 1@1\n(0-the table of multiplication, 1 or greater-the table of degrees),M(memory)\nand #(square root or degree).\nTip: if you want find root, enter second number 0.\nIf you want to find the degree, enter a second number-degree.\nIf you want close calculator, enter \"1q1\"\n");
				printf("Memory tools help:\n1-\"+\"\n2-\"-\"\n3-\"*\"\n4-\"/\"\n5-\"%\"\n6-set memory\n7-view memory(but first number must be and may be random)\n8-clear memory(but first number must be and may be random)\n9-view history of memory\n(but first number must be and may be random)\n10-clear history(but first number must be and may be random)\n11-set in memory summ\n12-set in current memory element of histry\n");
				break;
			case 'H':
				printf("You can use +,-,*,/,%%,0@0 or 1@1\n(0-the table of multiplication, 1 or greater-the table of degrees),M(memory)\nand #(square root or degree).\nTip: if you want find root, enter second number 0.\nIf you want to find the degree, enter a second number-degree.\nIf you want close calculator, enter \"1q1\"\n");
				printf("Memory tools help:\n1-\"+\"\n2-\"-\"\n3-\"*\"\n4-\"/\"\n5-\"%\"\n6-set memory\n7-view memory(but first number must be and may be random)\n8-clear memory(but first number must be and may be random)\n9-view history of memory\n(but first number must be and may be random)\n10-clear history(but first number must be and may be random)\n11-set in memory summ\n12-set in current memory element of histry\n");
				break;
//------------------------------------------------------------------------------
			case '@':
				if(f1<1)
				{
					for(intB=1;intB<=10;intB++)
					{
						for(intD=1;intD<=10;intD++)
						{
							intF=intD*intB;
							printf("%d\t",intF);
						}

					printf("\n\n");
					}
				}
				else
				{
					for(intB=1;intB<=10;intB++)
					{
						for(intD=1;intD<=10;intD++)
						{
							intF=intD*10+intB;
							intF=intF*intF;
							printf("%d\t",intF);
						}

					printf("\n\n");
					}
				}
				break;
//------------------------------------------------------------------------------
			case '+':
				fS=f1+f2;
				nF=(int)fS;
				if(fS-nF==0)
				printf("%d\n",(int)fS);
				else
				{
					if(fS==0.00000000)
					printf("0\n");
					else
					printf("%.8lf\n",fS);
				}
				break;
//------------------------------------------------------------------------------
			case '-':
				fS=f1-f2;
				nF=(int)fS;
				if(fS-nF==0)
				printf("%d\n",(int)fS);
				else
				{
					if(fS==0.00000000)
					printf("0\n");
					else
					printf("%.8lf\n",fS);
				}
				break;
//------------------------------------------------------------------------------
			case '*':
				fS=f1*f2;
				nF=(int)fS;
				if(fS-nF==0)
				printf("%d\n",(int)fS);
				else
				{
					if(fS==0.00000000)
					printf("0\n");
					else
					printf("%.8lf\n",fS);
				}
				break;
//------------------------------------------------------------------------------
			case '/':
				if(f2==0.0000000000000)
				printf("\aError! Are you stupid?\n");
				else
				{
				fS=f1/f2;
				nF=(int)fS;
				if(fS-nF==0)
				printf("%d\n",(int)fS);
				else
				{
					if(fS==0.00000000)
					printf("0\n");
					else
					printf("%.8lf\n",fS);
				}
				}
				break;
//------------------------------------------------------------------------------
			case '%':
				fS=f2/100*f1;
				nF=(int)fS;
				if(fS-nF==0)
				printf("%d\n",(int)fS);
				else
				{
					if(fS==0.00000000)
					printf("0\n");
					else
					printf("%.8lf\n",fS);
				}
				break;
//------------------------------------------------------------------------------
			case '#':
				if(2>f2)
				{
					fS=sqrt(f1);
					nF=(int)fS;
					if(fS-nF==0.00000000)
					printf("%d\n",nF);
					else
					{
						if(fS==0.00000000)
						printf("0\n");
						else
						printf("%.8lf\n",fS);
					}
				}
				else
				{
					fS=pow(f1,f2);
					nF=(int)fS;
					if(fS-nF==0)
					printf("%d\n",(int)fS);
					else
					{
						if(fS==0.00000000)
						printf("0\n");
						else
						printf("%.8lf\n",fS);
					}
				}

				break;
//------------------------------------------------------------------------------
			case 'q':
				i=2;
				break;
//------------------------------------------------------------------------------
			case 'Q':
				i=2;
				break;
//------------------------------------------------------------------------------
			case 'm':
				nJ=(int)f2;
				switch (nJ)
				{
					case 1:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							fS=fM+f1;
							nF=(int)fS;
							if(fS-nF==0.00000000)
							printf("%d\n",nF);
							else
							{
								if(fS==0.00000000)
								printf("0\n");
								else
								printf("%.8lf\n",fS);
							}
						}
					break;

					case 2:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							printf("1 - memory-%f, 2 - %f-memory, other - close memory\n",f1,f1);
							scanf_s("%d",&nM);
							switch(nM)
							{
								case 1:
									fS=fM-f1;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
								case 2:
									fS=f1-fM;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
								default:
									break;
							}
							break;
						}
					break;

					case 3:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							fS=fM*f1;
							nF=(int)fS;
							if(fS-nF==0.00000000)
							printf("%d\n",nF);
							else
							{
								if(fS==0.00000000)
								printf("0\n");
								else
								printf("%.8lf\n",fS);
							}
						}
					break;

					case 4:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							printf("1 - memory/%f, 2 - %f/memory, other - close memory\n",f1,f1);
							scanf_s("%d",&nM);
							switch(nM)
							{
								case 1:
									if(f1==0.0000000000000)
									{
										printf("\aError! Are you stupid?\n");
										break;
									}
									else
									{
									fS=fM/f1;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
									}
									break;
								case 2:
									if(fM==0.0000000000000)
									{
										printf("\aError! In memory registred zero.\n");
										break;
									}
									else
									{
									fS=fM/f1;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
									}
									break;
								default:
									break;
							}
						}
					break;

						case 5:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							printf("1 - memory%%%f, 2 - %f%%memory, other - close memory\n",f1,f1);
							scanf_s("%d",&nM);
							switch(nM)
							{
								case 1:
									fS=f1/100*fM;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
									break;
								case 2:
									fS=fM/100*fM;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
									break;
								default:
									break;
							}
						}
						break;


						case 6:
							if(j<15)
							{
								fM=f1;
								printf("Ok! Now in memory and history save %.8f.\n",fM);
								fH[j]=fM;
								j++;
								break;
							}
							else
							{
								printf("Warning! Memory history is full! I`m not save now \"%.8f\" in history!\n",f1);
								fM=f1;
								printf("Ok! Now in memory registred %.8f.\n",fM);
								break;
							}

						case 7:
							if(fM==0.1234567890)
							printf("\aIn memory not registred number!\n");
							else
							{

								nF=(int)fM;
								if(fM-nF==0.00000000)
								printf("%d\n",nF);
								else
								{
									if(fS==0.00000000)
									printf("0\n");
									else
									printf("%.8lf\n",fM);
								}
							 }
							 break;

						case 8:
							fM=0.1234567890;
							printf("Ok! Now memory is empty.\n");
							break;

						case 9:
							if(j!=0)
							{
								for(ii=0;ii<=j-1;ii++)
								{
									printf("%d: %.8f\n",ii+1,fH[ii]);
								}
							}
							else
							{
								printf("\aHistory is empty!\n");
							}
							break;

						case 10:
							if(j!=0)
							{
								for(ii=0;ii<=j-1;ii++)
								{
									fH[ii]=0;
								}
								printf("Ok! Now memory is empty.\n");
							}
							else
							{
								printf("\aHistory is empty! What I must to clean?\n");
							}
							j=0;
							break;
					break;

					case 11:
						if(fS==0.1234567890)
						printf("\aYou never did the calculations!\n");
						else
						{
                            if(j<15)
							{
								fM=fS;
								printf("Ok! Now in memory and history save %.8f.\n",fM);
								fH[j]=fM;
								j++;
								break;
							}
							else
							{
								printf("Warning! Memory history is full! I`m not save now \"%.8f\" in history!\n",f1);
								fM=fS;
								printf("Ok! Now in memory registred %.8f.\n",fM);
								break;
							}
						}
						break;

					case 12:
						if(j!=0)
						{
							for(ii=0;ii<=j-1;ii++)
							{
								printf("%d: %.8f\n",ii+1,fH[ii]);
							}
							printf("Enter index sign of history`s number:");
							scanf_s("%d",ii);
							fM=fH[ii];
						}
						 else
						{
							printf("\aHistory is empty!\n");
						}
						break;

					default:
							printf("\aError! \"%d\" is bad operation sign.\n",nJ);


				}
				break;
//------------------------------------------------------------------------------
				case 'M':
				nJ=(int)f2;
				switch (nJ)
				{
					case 1:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							fS=fM+f1;
							nF=(int)fS;
							if(fS-nF==0.00000000)
							printf("%d\n",nF);
							else
							{
								if(fS==0.00000000)
								printf("0\n");
								else
								printf("%.8lf\n",fS);
							}
						}
					break;

					case 2:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							printf("1 - memory-%f, 2 - %f-memory, other - close memory\n",f1,f1);
							scanf_s("%d",&nM);
							switch(nM)
							{
								case 1:
									fS=fM-f1;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
								case 2:
									fS=f1-fM;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
								default:
									break;
							}
							break;
						}
					break;

					case 3:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							fS=fM*f1;
							nF=(int)fS;
							if(fS-nF==0.00000000)
							printf("%d\n",nF);
							else
							{
								if(fS==0.00000000)
								printf("0\n");
								else
								printf("%.8lf\n",fS);
							}
						}
					break;

					case 4:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							printf("1 - memory/%f, 2 - %f/memory, other - close memory\n",f1,f1);
							scanf_s("%d",&nM);
							switch(nM)
							{
								case 1:
									if(f1==0.0000000000000)
									{
										printf("\aError! Are you stupid?\n");
										break;
									}
									else
									{
									fS=fM/f1;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
									}
									break;
								case 2:
									if(fM==0.0000000000000)
									{
										printf("\aError! In memory registred zero.\n");
										break;
									}
									else
									{
									fS=fM/f1;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
									}
									break;
								default:
									break;
							}
						}
					break;

						case 5:
						if(fM==0.1234567890)
						printf("\aIn memory not registred number!\n");
						else
						{
							printf("1 - memory%%%f, 2 - %f%%memory, other - close memory\n",f1,f1);
							scanf_s("%d",&nM);
							switch(nM)
							{
								case 1:
									fS=f1/100*fM;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
									break;
								case 2:
									fS=fM/100*fM;
									nF=(int)fS;
									if(fS-nF==0.00000000)
									printf("%d\n",nF);
									else
									{
										if(fS==0.00000000)
										printf("0\n");
										else
										printf("%.8lf\n",fS);
									}
									break;
								default:
									break;
							}
						}
						break;


						case 6:
							if(j<15)
							{
								fM=f1;
								printf("Ok! Now in memory and history save %.8f.\n",fM);
								fH[j]=fM;
								j++;
								break;
							}
							else
							{
								printf("Warning! Memory history is full! I`m not save now \"%.8f\" in history!\n",f1);
								fM=f1;
								printf("Ok! Now in memory registred %.8f.\n",fM);
								break;
							}

						case 7:
							if(fM==0.1234567890)
							printf("\aIn memory not registred number!\n");
							else
							{

								nF=(int)fM;
								if(fM-nF==0.00000000)
								printf("%d\n",nF);
								else
								{
									if(fS==0.00000000)
									printf("0\n");
									else
									printf("%.8lf\n",fM);
								}
							 }
							 break;

						case 8:
							fM=0.1234567890;
							printf("Ok! Now memory is empty.\n");
							break;

						case 9:
							if(j!=0)
							{
								for(ii=0;ii<=j-1;ii++)
								{
									printf("%d: %.8f\n",ii+1,fH[ii]);
								}
							}
							else
							{
								printf("\aHistory is empty!\n");
							}
							break;

						case 10:
							if(j!=0)
							{
								for(ii=0;ii<=j-1;ii++)
								{
									fH[ii]=0;
								}
								printf("Ok! Now memory is empty.\n");
							}
							else
							{
								printf("\aHistory is empty! What I must to clean?\n");
							}
							j=0;
							break;
					break;

					case 11:
						if(fS==0.1234567890)
						printf("\aYou never did the calculations!\n");
						else
						{
                            if(j<15)
							{
								fM=fS;
								printf("Ok! Now in memory and history save %.8f.\n",fM);
								fH[j]=fM;
								j++;
								break;
							}
							else
							{
								printf("Warning! Memory history is full! I`m not save now \"%.8f\" in history!\n",f1);
								fM=fS;
								printf("Ok! Now in memory registred %.8f.\n",fM);
								break;
							}
						}
						break;

					case 12:
						if(j!=0)
						{
							for(ii=0;ii<=j-1;ii++)
							{
								printf("%d: %.8f\n",ii+1,fH[ii]);
							}
							printf("Enter index sign of history`s number:");
							scanf_s("%d",ii);
							fM=fH[ii];
						}
						 else
						{
							printf("\aHistory is empty!\n");
						}
						break;

					default:
							printf("\aError! \"%d\" is bad operation sign.\n",nJ);


				}
				break;
//------------------------------------------------------------------------------

			default:
				printf("\a\"%c\" is bad operator or command!\n",cO);
				break;
		}
	}
}
//------------------------------------------------------------------------------
//end of code "calc.exe". ©InterMasterFly; ®InterMasterFly, InterGroup, incorporated. Don`t enter it in internet without writen right lict, if you have this project. In code on current moment 802 strings.
//конец исходного кода "calc.exe". ©InterMasterFly; ®InterMasterFly, InterGroup, incorporated. Не загружайте это в интернет без письменого разрешения, если владеете данным кодом. На данный момент в исходном коде 802 строки.
