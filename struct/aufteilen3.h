void aufteilen3(char erster[25], char zweiter[25], char dritter[25], char gesamt[75]) 

{ 

        int i, j= 0, a = 0, k = 0; 

		 

		         for (i = 0; gesamt[i]!= '\0'; i++) 

				         { 

						                 if ((gesamt[i] == ';')&&(j==0)) 

										                 { 

														                         j++; 

																				                         erster[i]='\0'; 

																										                 } 

																														                 else if ((gesamt[i] == ';')&&(j==1)) 

																																		                 { 

																																						                         j++; 

																																												                         zweiter[a]='\0'; 

																																																		                 } 

																																																						                 else if (j == 0) 

																																																										                         erster[i] = gesamt[i]; 

																																																																                 else if (j == 1) 

																																																																				                 { 

																																																																								                         zweiter[a] = gesamt[i]; 

																																																																														                         a++; 

																																																																																				                 } 

																																																																																								                 else   

																																																																																												                 { 

																																																																																																                         dritter[k] = gesamt[i]; 

																																																																																																						                        k++; 

																																																																																																												                } 

																																																																																																																        } 

																																																																																																																		       dritter[k] = '\0'; 

																																																																																																																			   } 
