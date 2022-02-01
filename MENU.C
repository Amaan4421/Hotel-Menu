
/*
			AUTHOR: AMAAN SAJINA
			DOC: 7/1/22
			OBJECT: GRAND MENU

*/

#include<stdio.h> //standard input and output
#include<conio.h> //console input and output
#define SIMPLEIDLI 40
#define RAVAIDLI 60
#define JIRAIDLI 45
#define MASALADOSA 30
#define SOUTHSPECIALDOSA 35
#define JIRADOSA 70
#define ONIONU 30
#define GREENPASSU 35
#define SOYAU 50
#define SIMPLE 30
#define SPICY 35
#define VV 50
#define KP 50
#define RP 50
#define KOP 60
#define RAWADHOKLA 35
#define SANDWICHDHOKLA 45
#define CHEESEDHOKLA 60
#define SIMPLEUNDHIYU 40
#define SURTIUNDHIYU 50
#define MATLAUNDHIYU 60
#define VANILLASHRIKHAND 70
#define CHOCHOLATESHRIKHAND 90
#define STRAWBERRYSHRIKHAND 110
#define PANEERKACHORI 70
#define MATARKACHORI 60
#define ALOOKACHORI 50
#define MOONGDALKHICHDI 30
#define BAJRAKHICHDI 45
#define PANCHMELKHICHDI 65
#define BUPASTA 40
#define ORPASTA 45
#define TOPASTA 65
#define NEPIZZA 140
#define GRPIZZA 130
#define SIPIZZA 150
#define RI 60
#define TU 90
#define ST 45
#define RPP 60
#define LP 60
#define SP 80
#define SP2 110
#define KR 150
#define SR 200
#define RAJOS 230
#define RED 170
#define WHITE 190
#define OILY 60
#define EGG 90
#define TOMATO 70
#define SM 120
#define MM 80
#define SPICYY 140
#define TACOS1 135
#define TACOS2 145
#define TACOS3 170
#define BUR1 70
#define BUR2 90
#define BUR3 110
#define SK 70
#define SSS 65
#define WB 90
#define J 45
#define WR 50
#define N 60
#define SINDHI 40
#define GS 60
#define SINDHIS 100
#define WS 150
#define WOS 120
#define NO 130
#define T 50
#define NEW 50
#define LS 100
#define B 70
#define CTM 100
#define CH 140
#define RB 40
#define AD 60
#define WH 90



void main()
{
	 int choice;
	 int south,idliPlate,i1,i2,i3,dosaPlate,d1,d2,d3,uttapamPlate,u1,u2,u3,meduvadaPlate,m1,m2,m3,pongalPlate,o1,o2,o3;
	 int gujrati,DhoklaPlate,dh1,dh2,dh3,undhiyaPlate,un1,un2,un3,shrikhandPlate,sh1,sh2,sh3,kachoriPlate,k1,k2,k3,khichdiPlate,kh1,kh2,kh3;
	 int italian,pastaPlate,pizzaPlate,lasagnaPlate,pennePlate,ravioliPlate,bu1,or2,to3,ne1,gr2,si3,ri1,tu2,stt3,rp1,lp2,sp3,sp1,kr2,sr3;
	 int maxican,chPlate,huevosPlate,machacaPlate,tacosPlate,burritosPlate,mm1,mm2,mm3,h1,h2,h3,t1,t2,t3,b1,b2,b3,ma1,ma2,ma3;
	 int sindhi,sindhikadhiPlate,sk1,sk2,sk3,dalpakwanPlate,j1,j2,j3,saibhajiPlate,sb1,sb2,sb3,seeromalpuroPlate,sm1,sm2,sm3,sindhithaliPlate,st1,st2,st3;
	 int chickenPlate,ch1,ch2,ch3;
	 int desserts,de1,de2,de3;
	 int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15;
	 clrscr();


	 printf("---MENU---");
	 printf("\n\n1---South Indian");
	 printf("\n2---Gujrati");
	 printf("\n3---Italian");
	 printf("\n4---Mexican");
	 printf("\n5---Sindhi");
	 printf("\n6---Chicken");
	 printf("\n7---Desserts");
	 printf("\n8---Exit");

	 printf("\nEnter your choice:");
	 scanf("%d",&choice);

	 switch(choice)
	 {
		case 1: printf("\n\nYou have selected South Indian!!");
			printf("\n\n1---Idli");
			printf("\n2---Dosa");
			printf("\n3---Uttapam");
			printf("\n4---Meduvada");
			printf("\n5---Pongal");

			printf("\nEnter your choice:");
			scanf("%d",&south);

			switch(south)
			{
			     case 1: printf("\nYou have selected Idli!!");
				     printf("\n\n1---Simple Idli");
				     printf("\n2---Rava Idli");
				     printf("\n3---Jira idli");

				     printf("\nEnter your choice:");
				     scanf("%d",&idliPlate);

				     switch(idliPlate)
				     {
					case 1: printf("\nYou have selected Simple Idli!!");
						printf("\nHow many  plates??");
						scanf("%d",&i1);

						p1=i1*SIMPLEIDLI;

						printf("Your bill for %d plates is %d",i1,p1);

						break;

					case 2: printf("\nYou have selected Rava Idli!!");
						printf("\nHow many  plates??");
						scanf("%d",&i2);

						p2=i2*RAVAIDLI;

						printf("Your bill for %d plates is %d",i2,p2);

						break;

					case 3: printf("\nYou have selected Jira Idli!!");
						printf("\nHow many  plates??");
						scanf("%d",&i3);

						p3=i3*JIRAIDLI;

						printf("Your bill for %d plates is %d",i3,p3);

						break;
					default: printf("Error!");
				     }//end of switch

				     break;

			     case 2: printf("\nYou have selected Dosa!!");
				     printf("\n\n1---Masala Dosa");
				     printf("\n2---South special dosa");
				     printf("\n3---Jira dosa");

				     printf("\nEnter your choice:");
				     scanf("%d",&dosaPlate);
				     switch(dosaPlate)
				     {
						case 1: printf("\nYou have selected Masala Dosa!!");
							printf("\nHow many  plates??");
							scanf("%d",&d1);

							p4=d1*MASALADOSA;

							printf("Your bill for %d plates is %d",d1,p4);

							break;

						case 2: printf("\nYou have selected South special dosa!!");
							printf("\nHow many  plates??");
							scanf("%d",&d2);

							p5=d2*SOUTHSPECIALDOSA;

							printf("Your bill for %d plates is %d",d2,p5);

							break;

						case 3: printf("\nYou have selected Jira dosa!!");
							printf("\nHow many  plates??");
							scanf("%d",&d3);

							p6=d3*JIRADOSA;

							printf("Your bill for %d plates is %d",d3,p6);

							break;
							default: printf("Error!");
				     }//end of switch


				     break;

			     case 3: printf("\nYou have selected Uttapam!!");
				     printf("\n\n1---Onion U");
				     printf("\n2---Green pass U");
				     printf("\n3---Soya U");

				     printf("\nEnter your choice:");
				     scanf("%d",&uttapamPlate);
				     switch(uttapamPlate)
				     {
						case 1: printf("\nYou have selected Onion U!!");
							printf("\nHow many  plates??");
							scanf("%d",&u1);

							p7=u1*ONIONU;

							printf("Your bill for %d plates is %d",u1,p7);

							break;

						case 2: printf("\nYou have selected Green pass U!!");
							printf("\nHow many  plates??");
							scanf("%d",&u2);

							p8=u2*GREENPASSU;

							printf("Your bill for %d plates is %d",d2,p5);

							break;

						case 3: printf("\nYou have selected Soya U!!");
							printf("\nHow many  plates??");
							scanf("%d",&d3);

							p9=d3*SOYAU;

							printf("Your bill for %d plates is %d",d3,p9);

							break;

						default: printf("Error!");

					  }//end of switch

			     case 4: printf("\nYou have selected Meduvada!!");
				     printf("\n\n1---Simple");
				     printf("\n2---Spicy");
				     printf("\n3---Vellavada");

				     printf("\nEnter your choice:");
				     scanf("%d",&meduvadaPlate);
				     switch(meduvadaPlate)
				     {
						case 1: printf("\nYou have selected Simple!!");
							printf("\nHow many  plates??");
							scanf("%d",&m1);

							p10=m1*SIMPLE;

							printf("Your bill for %d plates is %d",m1,p10);

							break;

						case 2: printf("\nYou have selected Spicy!!");
							printf("\nHow many  plates??");
							scanf("%d",&m2);

							p11=m2*SPICY;

							printf("Your bill for %d plates is %d",m2,p11);

							break;

						case 3: printf("\nYou have selected Vellavada!!");
							printf("\nHow many  plates??");
							scanf("%d",&m3);

							p12=m3*VV;

							printf("Your bill for %d plates is %d",m3,p12);

							break;

						default: printf("Error!");

					  }//end of switch
				case 5: printf("\nYou have selected Pongal!!");
					printf("\n\n1---Khara Pongal");
					printf("\n2---Rava Pongal");
					printf("\n3---Koil Pongal");

					printf("\nEnter your choice:");
					scanf("%d",&pongalPlate);
					switch(pongalPlate)
					{
						case 1: printf("\nYou have selected KP!!");
							printf("\nHow many  plates??");
							scanf("%d",&o1);

							p13=o1*KP;

							printf("Your bill for %d plates is %d",o1,p13);

							break;

						case 2: printf("\nYou have RP!!");
							printf("\nHow many  plates??");
							scanf("%d",&o2);

							p14=o2*RP;

							printf("Your bill for %d plates is %d",o2,p14);

							break;

						case 3: printf("\nYou have selected Koil Pongal!!");
							printf("\nHow many  plates??");
							scanf("%d",&o3);

							p15=o3*KOP;

							printf("Your bill for %d plates is %d",o3,p15);

							break;

						default: printf("Error!");

				     }//end of switch






				     break;

			     default: printf("\nInvalid choice!!");

			}//end of switch

			break;

		case 2: printf("You have selected Gujrati!!");
				printf("\n\n1---Dhokla");
				printf("\n2---Undhiyu");
				printf("\n3---Shrikhand");
				printf("\n4---Kachori");
				printf("\n5---Khichdi");

				printf("\nEnter your choice:");
				scanf("%d",&gujrati);

			switch(gujrati)
			{
			     case 1: printf("\nYou have selected Dhokla!!");
				     printf("\n\n1---Rava Dhokla");
				     printf("\n2---Sandwich Dhokla");
				     printf("\n3---Cheese Dhokla");

				     printf("\nEnter your choice:");
				     scanf("%d",&DhoklaPlate);

				     switch(DhoklaPlate)
				     {
							case 1: printf("\nYou have selected Rava Dhokla!!");
									printf("\nHow many  plates??");
									scanf("%d",&dh1);

									p1=dh1*RAWADHOKLA;

									printf("Your bill for %d plates is %d",dh1,p1);

							break;

							case 2: printf("\nYou have selected Sandwich Dhokla!!");
									printf("\nHow many  plates??");
									scanf("%d",&dh2);

									p2=dh2*SANDWICHDHOKLA;

								printf("Your bill for %d plates is %d",dh2,p2);

							break;

							case 3: printf("\nYou have selected Cheese Dhokla!!");
									printf("\nHow many  plates??");
									scanf("%d",&dh3);

									p3=dh3*CHEESEDHOKLA;

									printf("Your bill for %d plates is %d",dh3,p3);

							break;
							
							default: printf("Error!");
							
				     }//end of switch

				     break;

			     case 2: printf("\nYou have selected Undhiyu!!");
						printf("\n\n1---Simple Undhiyu");
						printf("\n2---Surti Undhiyu");
						printf("\n3---Matla Undhiyu");

						printf("\nEnter your choice:");
						scanf("%d",&undhiyaPlate);
						switch(undhiyaPlate)
						{
								case 1: printf("\nYou have selected Simple Undhiyu!!");
										printf("\nHow many  plates??");
										scanf("%d",&un1);

										p4=un1*SIMPLEUNDHIYU;

										printf("Your bill for %d plates is %d",un1,p4);

								break;

								case 2: printf("\nYou have selected Surti Undhiyu!!");
										printf("\nHow many  plates??");
										scanf("%d",&un2);

										p5=un2*SURTIUNDHIYU;

										printf("Your bill for %d plates is %d",un2,p5);

								break;

							case 3: printf("\nYou have selected Matla Undhiyu!!");
									printf("\nHow many  plates??");
									scanf("%d",&un3);

									p6=un3*MATLAUNDHIYU;

									printf("Your bill for %d plates is %d",un3,p6);

							break;
							
							default: printf("Error!");
							
				     }//end of switch


				     break;

			     case 3: printf("\nYou have selected Shrikhand!!");
						 printf("\n\n1---Vanilla Shrikhand");
						 printf("\n2---Chocholate Shrikhand");
						 printf("\n3---Strawberry Shrikhand");

						 printf("\nEnter your choice:");
						 scanf("%d",&shrikhandPlate);
						 switch(shrikhandPlate)
						{
							case 1: printf("\nYou have selected Vanilla Shrikhand!!");
									printf("\nHow many  plates??");
									scanf("%d",&sh1);

									p7=sh1*VANILLASHRIKHAND;

									printf("Your bill for %d plates is %d",sh1,p7);
									
							break;

							case 2: printf("\nYou have selected Chocholate Shrikhand!!");
									printf("\nHow many  plates??");
									scanf("%d",&sh2);

									p8=sh2*CHOCHOLATESHRIKHAND;

									printf("Your bill for %d plates is %d",sh2,p8);

							break;

							case 3: printf("\nYou have selected Strawberry Shrikhand!!");
									printf("\nHow many  plates??");
									scanf("%d",&sh3);

									p9=sh3*STRAWBERRYSHRIKHAND;

									printf("Your bill for %d plates is %d",sh3,p9);

							break;

						default: printf("Error!");

					  }//end of switch

			     case 4: printf("\nYou have selected Kachori!!");
						 printf("\n\n1---Paneer Kachori");
						 printf("\n2---Matar Kachori");
						 printf("\n3---Aloo Kachori");

						 printf("\nEnter your choice:");
						 scanf("%d",&kachoriPlate);
						 switch(kachoriPlate)
						{
							case 1: printf("\nYou have selected Paneer Kachori!!");
									printf("\nHow many  plates??");
									scanf("%d",&k1);

									p10=k1*PANEERKACHORI;

									printf("Your bill for %d plates is %d",k1,p10);

							break;

							case 2: printf("\nYou have selected Matar Kachori!!");
									printf("\nHow many  plates??");
									scanf("%d",&k2);

									p11=k2*MATARKACHORI;

									printf("Your bill for %d plates is %d",k2,p11);

							break;

							case 3: printf("\nYou have selected Aloo Kachori!!");
									printf("\nHow many  plates??");
									scanf("%d",&k3);

									p12=k3*ALOOKACHORI;

									printf("Your bill for %d plates is %d",k3,p12);

							break;

						default: printf("Error!");

					  }//end of switch

				case 5: printf("\nYou have selected Khichdi!!");
						printf("\n\n1---Moong Dal Khichdi");
						printf("\n2---Bajra Khichdi");
						printf("\n3---Panchmel Khichdi");

						printf("\nEnter your choice:");
						scanf("%d",&khichdiPlate);
						switch(khichdiPlate)
						{
							case 1: printf("\nYou have selected Moong Dal Khichdi!!");
									printf("\nHow many  plates??");
									scanf("%d",&kh1);

									p13=kh1*MOONGDALKHICHDI;

									printf("Your bill for %d plates is %d",kh1,p13);

							break;

							case 2: printf("\nYou have Bajra Khichdi!!");
									printf("\nHow many  plates??");
									scanf("%d",&kh2);

									p14=kh2*BAJRAKHICHDI;

									printf("Your bill for %d plates is %d",kh2,p14);

							break;

							case 3: printf("\nYou have selected Panchmel Khichdi!!");
									printf("\nHow many  plates??");
									scanf("%d",&kh3);

									p15=kh3*PANCHMELKHICHDI;

									printf("Your bill for %d plates is %d",kh3,p15);

							break;

						default: printf("Error!");

				     }//end of switch
			}

			break;

		case 3: printf("You have selected Italian!!");
			    printf("\n\n1---Pasta");
				printf("\n2---Pizza");
				printf("\n3---Lasagna");
				printf("\n4---Penne");
				printf("\n5---Ravioli");

				printf("\nEnter your choice:");
				scanf("%d",&italian);

			switch(italian)
			{
			     case 1: printf("\nYou have selected Pasta!!");
						 printf("\n\n1---Bucatini Pasta");
						 printf("\n2---Orecchiette Pasta");
						 printf("\n3---Tortelloni Pasta");

						 printf("\nEnter your choice:");
						 scanf("%d",&pastaPlate);

				     switch(pastaPlate)
				     {
						case 1: printf("\nYou have selected Bucatini Pasta!!");
								printf("\nHow many  plates??");
								scanf("%d",&bu1);

								p1=bu1*BUPASTA;

								printf("Your bill for %d plates is %d",bu1,p1);

						break;

					case 2: printf("\nYou have selected Orecchiette Pasta!!");
							printf("\nHow many  plates??");
							scanf("%d",&or2);

							p2=or2*ORPASTA;

							printf("Your bill for %d plates is %d",or2,p2);

					break;

					case 3: printf("\nYou have selected Tortelloni Pasta!!");
							printf("\nHow many  plates??");
							scanf("%d",&to3);

							p3=to3*TOPASTA;

							printf("Your bill for %d plates is %d",to3,p3);

					break;
					
					default: printf("Error!");
					
					}//end of switch

			   break;

			  case 2: printf("\nYou have selected Pizza!!"); 
					  printf("\n\n1---Neapolian Pizza");
					  printf("\n2---Greek Pizza");
					  printf("\n3---Sicilian Pizza");

					  printf("\nEnter your choice:");
				      scanf("%d",&pizzaPlate);
				      switch(pizzaPlate)
				      {
							case 1: printf("\nYou have selected Neapolian Pizza!!");
									printf("\nHow many  plates??");
									scanf("%d",&ne1);

									p4=ne1*NEPIZZA;

									printf("Your bill for %d plates is %d",ne1,p4);

							break;

						    case 2: printf("\nYou have selected Greek Pizza!!");
									printf("\nHow many  plates??");
									scanf("%d",&gr2);

									p5=gr2*GRPIZZA;

									printf("Your bill for %d plates is %d",gr2,p5);

							break;

						    case 3: printf("\nYou have selected Sicilian!!");
									printf("\nHow many  plates??");
									scanf("%d",&si3);

									p6=si3*SIPIZZA;

									printf("Your bill for %d plates is %d",si3,p6);

							break;
									
							default: printf("Error!");
							
				     }//end of switch


				     break;

			     case 3: printf("\nYou have selected Lasagna!!");
						 printf("\n\n1---Ribbon Lasagna");
						 printf("\n2---Tubular Lasagna");
						 printf("\n3---Stuffed Lasagna");

						 printf("\nEnter your choice:");
						 scanf("%d",&lasagnaPlate);
						 switch(lasagnaPlate)
						{
							case 1: printf("\nYou have selected Ribbon Lasagna!!");
									printf("\nHow many  plates??");
									scanf("%d",&ri1);

									p7=ri1*RI;

									printf("Your bill for %d plates is %d",ri1,p7);

							break;

							case 2: printf("\nYou have selected Tubular Lasagna!!");
									printf("\nHow many  plates??");
									scanf("%d",&tu2);

									p8=tu2*TU;

									printf("Your bill for %d plates is %d",tu2,p5);

							break;

							case 3: printf("\nYou have selected Stuffed Lasagna!!");
									printf("\nHow many  plates??");
									scanf("%d",&stt3);

									p9=stt3*ST;

									printf("Your bill for %d plates is %d",stt3,p9);

							break;

						default: printf("Error!");

					  }//end of switch
					  
					  break;

			     case 4: printf("\nYou have selected Penne!!");
						 printf("\n\n1---Rigate Penne");
						 printf("\n2---Lisce Penne");
						 printf("\n3---Simple Penne");

						 printf("\nEnter your choice:");
						 scanf("%d",&pennePlate);
				     switch(pennePlate)
				     {
						case 1: printf("\nYou have selected Rigate Penne!!");
								printf("\nHow many  plates??");
								scanf("%d",&rp1);

								p10=rp1*RPP;

								printf("Your bill for %d plates is %d",rp1,p10);

						break;

						case 2: printf("\nYou have selected Lisce Penne!!");
								printf("\nHow many  plates??");
								scanf("%d",&lp2);

								p11=lp2*LP;

								printf("Your bill for %d plates is %d",lp2,p11);

						break;

						case 3: printf("\nYou have selected Simple Penne!!");
								printf("\nHow many  plates??");
								scanf("%d",&sp3);

								p12=sp3*SP;

								printf("Your bill for %d plates is %d",sp3,p12);

						break;

						default: printf("Error!");

					  }//end of switch
					  
					  break;
					  
				case 5: printf("\nYou have selected Ravioli!!");
						printf("\n\n1---Spinach Ravioli");
						printf("\n2---Kale Pesto Ravioli");
						printf("\n3---Simple Ravioli");

						printf("\nEnter your choice:");
						scanf("%d",&ravioliPlate);
						switch(ravioliPlate)
						{
							case 1: printf("\nYou have selected Spinach Ravioli!!");
									printf("\nHow many  plates??");
									scanf("%d",&sp1);

									p13=sp1*SP2;

									printf("Your bill for %d plates is %d",sp1,p13);

							break;

							case 2: printf("\nYou have selected Kale Pesto Ravioli!!");
									printf("\nHow many  plates??");
									scanf("%d",&kr2);

									p14=kr2*KR;

									printf("Your bill for %d plates is %d",kr2,p14);

							break;

							case 3: printf("\nYou have selected Simple Ravioli!!");
									printf("\nHow many  plates??");
									scanf("%d",&sr3);

									p15=sr3*SR;

									printf("Your bill for %d plates is %d",sr3,p15);

							break;

						default: printf("Error!");

				     }//end of switch

					break;

			     default: printf("\nInvalid choice!!");

			}//end of switch
			
			break;

		case 4: printf("You have selected Mexican!!");
				printf("\n\n1---Chilaquiles");
				printf("\n2---Huevos");
				printf("\n3---Machaca");
				printf("\n4---Tacos");
				printf("\n5---Burritos");

				printf("\nEnter your choice:");
				scanf("%d",&maxican);

				switch(maxican)
				{
					 case 1: printf("\nYou have selected Chilaquiles!!");
							 printf("\n\n1---Rajos");
							 printf("\n2---Red");
							 printf("\n3---White");

							 printf("\nEnter your choice:");
							 scanf("%d",&chPlate);

							 switch(chPlate)
							 {
								case 1: printf("\nYou have selected Rajos!!");
										printf("\nHow many  plates??");
										scanf("%d",&mm1);

										p1=mm1*RAJOS;

										printf("Your bill for %d plates is %d",mm1,p1);

								break;

								case 2: printf("\nYou have selected Red!!");
										printf("\nHow many  plates??");
										scanf("%d",&mm2);

										p2=mm2*RED;

										printf("Your bill for %d plates is %d",mm2,p2);

								break;

								case 3: printf("\nYou have selected White!!");
										printf("\nHow many  plates??");
										scanf("%d",&mm3);

										p3=mm3*WHITE;

										printf("Your bill for %d plates is %d",mm3,p3);

								break;
								
								default: printf("Error!");
								
						 }//end of switch

						 break;

					 case 2: printf("\nYou have selected Huevos!!");
							 printf("\n\n1---Oily");
							 printf("\n2---Egg");
							 printf("\n3---Tomato");

							 printf("\nEnter your choice:");
							 scanf("%d",&huevosPlate);
							 switch(huevosPlate)
							 {
								case 1: printf("\nYou have selected Oily!!");
										printf("\nHow many  plates??");
										scanf("%d",&h1);

										p4=h1*OILY;

										printf("Your bill for %d plates is %d",h1,p4);

								break;

							case 2: printf("\nYou have selected Egg!!");
									printf("\nHow many  plates??");
									scanf("%d",&h2);

									p5=h2*EGG;

									printf("Your bill for %d plates is %d",h2,p5);

							break;

							case 3: printf("\nYou have selected Tomato!!");
									printf("\nHow many  plates??");
									scanf("%d",&h3);

									p6=h3*TOMATO;

									printf("Your bill for %d plates is %d",h3,p6);

							break;
							
							default: printf("Error!");
							
						 }//end of switch


						 break;

					 case 3: printf("\nYou have selected Machaca!!");
							 printf("\n\n1---Simple");
							 printf("\n2---Medium");
							 printf("\n3---Spicy");

							 printf("\nEnter your choice:");
							 scanf("%d",&machacaPlate);
							 switch(machacaPlate)
							{
								case 1: printf("\nYou have selected Simple!!");
										printf("\nHow many  plates??");
										scanf("%d",&ma1);

										p7=ma1*SM;

										printf("Your bill for %d plates is %d",ma1,p7);

								break;

								case 2: printf("\nYou have selected Medium!!");
										printf("\nHow many  plates??");
										scanf("%d",&ma2);

										p8=ma2*MM;

										printf("Your bill for %d plates is %d",ma2,p5);

								break;

								case 3: printf("\nYou have selected Stuffed Spicy!!");
										printf("\nHow many  plates??");
										scanf("%d",&ma3);

										p9=ma3*SPICYY;

										printf("Your bill for %d plates is %d",ma3,p9);

								break;

							default: printf("Error!");

						  }//end of switch
						  
						  break;

					 case 4: printf("\nYou have selected Tacos!!");
							 printf("\n\n1---Shrimp");
							 printf("\n2---Tinga");
							 printf("\n3---Pastor");

							 printf("\nEnter your choice:");
							 scanf("%d",&tacosPlate);
							 switch(tacosPlate)
							 {
								case 1: printf("\nYou have selected Shrimp!!");
										printf("\nHow many  plates??");
										scanf("%d",&t1);

										p10=t1*TACOS1;

										printf("Your bill for %d plates is %d",t1,p10);

								break;

								case 2: printf("\nYou have selected Tinga!!");
										printf("\nHow many  plates??");
										scanf("%d",&t2);

										p11=t2*TACOS2;

										printf("Your bill for %d plates is %d",t2,p11);

								break;

								case 3: printf("\nYou have selected Pastor!!");
										printf("\nHow many  plates??");
										scanf("%d",&t3);

										p12=t3*TACOS3;

										printf("Your bill for %d plates is %d",t3,p12);

								break;

							default: printf("Error!");

						  }//end of switch
						  
						  break;
					case 5: printf("\nYou have selected Burritos!!");
							printf("\n\n1---Spicy Beef");
							printf("\n2---Cheese Burger");
							printf("\n3---Rice");

							printf("\nEnter your choice:");
							scanf("%d",&burritosPlate);
							switch(burritosPlate)
							{
								case 1: printf("\nYou have selected Spicy Beef!!");
										printf("\nHow many  plates??");
										scanf("%d",&b1);

										p13=b1*BUR1;

										printf("Your bill for %d plates is %d",b1,p13);

								break;

								case 2: printf("\nYou have selected Cheese Burger!!");
										printf("\nHow many  plates??");
										scanf("%d",&b2);

										p14=b2*BUR2;

										printf("Your bill for %d plates is %d",b2,p14);

								break;

								case 3: printf("\nYou have selected Rice!!");
										printf("\nHow many  plates??");
										scanf("%d",&b3);

										p15=b3*BUR3;

										printf("Your bill for %d plates is %d",b3,p15);

								break;

							default: printf("Error!");

						 }//end of switch

						break;

					 default: printf("\nInvalid choice!!");

				}//end of switch

			break;

		

		case 5:printf("You have selected Sindhi!!");

			printf("\n\n1---Sindhi kadhi");
			printf("\n2---Dal pakwan");
			printf("\n3---Saibhaji");
			printf("\n4---Serro Malpuro");
			printf("\n5---Sindhi Dal");

			printf("\nEnter your choice:");
			scanf("%d",&sindhi);

			switch(sindhi)
			{
			     case 1: printf("\nYou have selected Sindhi Kadhi!!");
				     printf("\n\n1---Simple");
				     printf("\n2---Spicy");
				     printf("\n3---With butter");

				     printf("\nEnter your choice:");
				     scanf("%d",&sindhikadhiPlate);

				     switch(sindhikadhiPlate)
				     {
					case 1: printf("\nYou have selected Simple Idli!!");
						printf("\nHow many  plates??");
						scanf("%d",&sk1);

						p1=sk1*SK;

						printf("Your bill for %d plates is %d",sk1,p1);

						break;

					case 2: printf("\nYou have selected Spicy!!");
						printf("\nHow many  plates??");
						scanf("%d",&sk2);

						p2=sk2*SSS;

						printf("Your bill for %d plates is %d",sk2,p2);

						break;

					case 3: printf("\nYou have selected With Butter!!");
						printf("\nHow many  plates??");
						scanf("%d",&sk3);

						p3=sk3*WB;

						printf("Your bill for %d plates is %d",sk3,p3);

						break;
					default: printf("Error!");
				     }//end of switch

				     break;

			     case 2: printf("\nYou have selected Dal Pakwan!!");
				     printf("\n\n1---Jeera");
				     printf("\n2---With Rice");
				     printf("\n3---Normal");

				     printf("\nEnter your choice:");
				     scanf("%d",&dalpakwanPlate);
				     switch(dalpakwanPlate)
				     {
						case 1: printf("\nYou have selected Jeera!!");
							printf("\nHow many  plates??");
							scanf("%d",&j1);

							p4=j1*J;

							printf("Your bill for %d plates is %d",j1,p4);

							break;

						case 2: printf("\nYou have selected With Rice!!");
							printf("\nHow many  plates??");
							scanf("%d",&j2);

							p5=j2*WR;

							printf("Your bill for %d plates is %d",j2,p5);

							break;

						case 3: printf("\nYou have selected Normal!!");
							printf("\nHow many  plates??");
							scanf("%d",&j3);

							p6=j3*N;

							printf("Your bill for %d plates is %d",j3,p6);

							break;
							default: printf("Error!");
				     }//end of switch


				     break;

			     case 3: printf("\nYou have selected Saibhaji !!");
				     printf("\n\n1---Sindhi style");
				     printf("\n2---Gujrati style");
				     printf("\n3---Special");

				     printf("\nEnter your choice:");
				     scanf("%d",&saibhajiPlate);
				     switch(saibhajiPlate)
				     {
						case 1: printf("\nYou have selected Sindhi style!!");
							printf("\nHow many  plates??");
							scanf("%d",&sb1);

							p7=sb1*SINDHI;

							printf("Your bill for %d plates is %d",sb1,p7);

							break;

						case 2: printf("\nYou have selected Gujrati style!!");
							printf("\nHow many  plates??");
							scanf("%d",&sb2);

							p8=sb2*GS;

							printf("Your bill for %d plates is %d",sb2,p5);

							break;

						case 3: printf("\nYou have selected Special");
							printf("\nHow many  plates??");
							scanf("%d",&sb3);

							p9=sb3*SINDHIS;

							printf("Your bill for %d plates is %d",sb3,p9);

							break;

						default: printf("Error!");

					  }//end of switch

			     case 4: printf("\nYou have selected Seero Malpuro!!");
				     printf("\n\n1---With sugar");
				     printf("\n2---Without sugar");
				     printf("\n3---Medium");

				     printf("\nEnter your choice:");
				     scanf("%d",&seeromalpuroPlate);
				     switch(seeromalpuroPlate)
				     {
						case 1: printf("\nYou have selected With sugar!!");
							printf("\nHow many  plates??");
							scanf("%d",&sm1);

							p10=sm1*WS;

							printf("Your bill for %d plates is %d",sm1,p10);

							break;

						case 2: printf("\nYou have selected Without sugar!!");
							printf("\nHow many  plates??");
							scanf("%d",&sm2);

							p11=sm2*WOS;

							printf("Your bill for %d plates is %d",sm2,p11);

							break;

						case 3: printf("\nYou have selected Normal!!");
							printf("\nHow many  plates??");
							scanf("%d",&sm3);

							p12=sm3*NO;

							printf("Your bill for %d plates is %d",sm3,p12);

							break;

						default: printf("Error!");

				     }//end of switch
				case 5: printf("\nYou have selected Sindhi thali!!");
					printf("\n\n1---Traditional");
					printf("\n2---New");
					printf("\n3---Large size");

					printf("\nEnter your choice:");
					scanf("%d",&sindhithaliPlate);
					switch(sindhithaliPlate)
					{
						case 1: printf("\nYou have selected Traditional!!");
							printf("\nHow many  plates??");
							scanf("%d",&st1);

							p13=st1*T;

							printf("Your bill for %d plates is %d",st1,p13);

							break;

						case 2: printf("\nYou have New!!");
							printf("\nHow many  plates??");
							scanf("%d",&st2);

							p14=st2*NEW;

							printf("Your bill for %d plates is %d",st2,p14);

							break;

						case 3: printf("\nYou have selected Large size!!");
							printf("\nHow many  plates??");
							scanf("%d",&st3);

							p15=st3*LS;

							printf("Your bill for %d plates is %d",st3,p15);

							break;

						default: printf("Error!");

				     }//end of switch

				     break;

			     default: printf("\nInvalid choice!!");

			}//end of switch

			break;


		case 6: printf("You have selected Chicken!!");
				printf("\n\n1---Butter chicken");
				printf("\n2---Chicken tikka masala");
				printf("\n3---Chicken handi");
				
				printf("\nEnter your choice:");
				scanf("%d",&chickenPlate);
					switch(chickenPlate)
					{
						case 1: printf("\nYou have selected Butter chicken!!");
							printf("\nHow many  plates??");
							scanf("%d",&ch1);

							p1=ch1*B;

							printf("Your bill for %d plates is %d",ch1,p1);

							break;

						case 2: printf("\nYou have Chicken tikka masala!!");
							printf("\nHow many  plates??");
							scanf("%d",&ch2);

							p2=ch2*CTM;

							printf("Your bill for %d plates is %d",ch2,p2);

							break;

						case 3: printf("\nYou have selected Chicken handi!!");
							printf("\nHow many  plates??");
							scanf("%d",&ch3);

							p3=ch3*CH;

							printf("Your bill for %d plates is %d",ch3,p3);

							break;

						default: printf("Error!");

				     }//end of switch

		break;


		case 7: printf("You have selected Desserts!!");

				printf("\n\n1---Rajbhog");
				printf("\n2---American dryfruit");
				printf("\n3---White house");

				printf("\nEnter your choice:");
				scanf("%d",&desserts);
					switch(desserts)
					{
						case 1: printf("\nYou have selected Rajbhog!!");
							printf("\nHow many  spoons??");
							scanf("%d",&de1);

							p1=de1*RB;

							printf("Your bill for %d plates is %d",de1,p1);

							break;

						case 2: printf("\nYou have American dryfruit!!");
							printf("\nHow many  spoons??");
							scanf("%d",&de2);

							p2=de2*AD;

							printf("Your bill for %d plates is %d",de2,p12);

							break;

						case 3: printf("\nYou have selected White house!!");
							printf("\nHow many  spoons??");
							scanf("%d",&de3);

							p3=de3*WH;

							printf("Your bill for %d plates is %d",de3,p3);

							break;

						default: printf("Error!");

				     }//end of switch
		break;



		case 8: exit(0);
		break;

		default:printf("Invalid choice!!");



	 }//end of switch


	getch();

}//end of main

