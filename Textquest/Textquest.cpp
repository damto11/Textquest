﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	int character, enemy, fight,fraction,decision;
	char quest;
	printf("Выберети фракцию за которую вы будете играть:\n1.Добро\n2.Зло\n");
	scanf("%d", &fraction);
	if (fraction == 1)
	{
		printf("Выберите своего героя:\n1.Добрыня Никитыч\n2.Илья Муромец\n3.Алёша Попович\n");
		scanf("%d", &character);
		switch (character)
		{
		case 1: //Начало ветки Добрыни Никитича
		{
			printf("Выберите вашего врага:\n1.Змей Горыныч\n2.Баба Яга\n3.Соловей Разбойник\n");
			scanf("%d", &enemy);
			switch (enemy)
			{
			case 1:
			{
				printf("И так твой враг-Змей горыныч. отправиться в его логово и сразить его?\n1.Да(y)\n2.Нет(n)");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты неделями выслеживаешь логово Змея Горыныча и наконец-то его находишь.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 1 && fight <= 4)
					{
						printf("Достав свой меч ты парой взмахов меча отрубаешь все головы Змею Горынычу.Ты победил");
					}
					else if (fight == 5)
					{
						printf("Достав свой меч ты кинулся на Змея Горыныча,битва была довольно короткой.\nГорыныч нанёс тебе смертельный удар и ты погиб.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}
				break;
			}
			case 2:
			{
				printf("Твой враг-Баба Яга.Желаешь отправиться на поиски чтобы убить её?\n1.Да(y)\n2.Нет(n)\n");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты отправляешься в далекиё леса и болота за Бабой Ягой и наконец-то её находишь.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 3 && fight <= 5)
					{
						printf("Ты начинаешь приближаться к её избе,вооружившись мечём,но тут тебя атакуют ожившие пни.\nТы достаешь меч и начинаешь пробираться к избе раскидывая ожившие деревья.\nНаконец ты врываешься в избу и одним быстрым и точным ударом меча убиваешь Бабу Ягу.Ты победил");
					}
					else if (fight == 1 || fight == 2)
					{
						printf("Ты заходишь в болото где находиться Баба Яга,но вдруг на тебя набрасывается оживший пень и протыкает тебя своей веткой.\n");
						printf("У тебя бы и был был шанс что-то сделать если бы пень был один,но их были десятки,а может и сотни,так ты ещё и ранен.\nТы невыдерживаешься напора пней и получаешь одну фатальную рану,ты погиб.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}

				break;
			}
			case 3:
			{
				printf("Твой враг-Соловей Разбойник.Недавно он разорил соседнюю деревню.Желаешь пойти за его головой?\n1.Да(y)\n2.Нет(n)");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты выходишь на поиски Соловья Разбойника и встречаешь его разоряющего соседнюю деревню.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 1 && fight <= 2)
					{
						printf("Подойдя ближе ты видишь как местные стражники всё ещё пытались остановить Соловья Разбойника.\nС их помощью ты без проблем убиваешь Соловья Разбойника.Получив награду за его голову ты отправляешься домой.Ты победил");
					}
					else if (fight >= 3 && fight <= 5)
					{
						printf("Зайдя в деревню ты увидел,что Соловей Разбойник уже расправился со всеми стражниками в этой деревне.\nТы начинаешь с ним сражение,но не можешь противостоять ему на равных.\nВо время битвы ты получаешь смертельное ранение и погибаешь.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}
				break;
			}
			default:
			{
				printf("Ошибка");
				break;
			}
			}
			break;
		} //Конец ветки Добрыни Никитича
		case 2:
		{
			printf("Выберите вашего врага:\n1.Змей Горыныч\n2.Баба Яга\n3.Соловей Разбойник\n");
			scanf("%d", &enemy);
			switch (enemy)
			{
			case 1:
			{
				printf("И так твой враг-Змей горыныч. отправиться в его логово и сразить его?\n1.Да(y)\n2.Нет(n)");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты неделями выслеживаешь логово Змея Горыныча и наконец-то его находишь.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 1 && fight <= 4)
					{
						printf("Достав свой меч ты парой взмахов меча отрубаешь все головы Змею Горынычу.Ты победил");
					}
					else if (fight == 5)
					{
						printf("Достав свой меч ты кинулся на Змея Горыныча,битва была довольно короткой.\nГорыныч нанёс тебе смертельный удар и ты погиб.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}
				break;
			}
			case 2:
			{
				printf("Твой враг-Баба Яга.Желаешь отправиться на поиски чтобы убить её?\n1.Да(y)\n2.Нет(n)\n");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты отправляешься в далекиё леса и болота за Бабой Ягой и наконец-то её находишь.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 3 && fight <= 5)
					{
						printf("Ты начинаешь приближаться к её избе,вооружившись мечём,но тут тебя атакуют ожившие пни.\nТы достаешь меч и начинаешь пробираться к избе раскидывая ожившие деревья.\nНаконец ты врываешься в избу и одним быстрым и точным ударом меча убиваешь Бабу Ягу.Ты победил");
					}
					else if (fight == 1 || fight == 2)
					{
						printf("Ты заходишь в болото где находиться Баба Яга,но вдруг на тебя набрасывается оживший пень и протыкает тебя своей веткой.\n");
						printf("У тебя бы и был был шанс что-то сделать если бы пень был один,но их были десятки,а может и сотни,так ты ещё и ранен.\nТы невыдерживаешься напора пней и получаешь одну фатальную рану,ты погиб.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}
				break;
			}
			case 3:
			{
				printf("Твой враг-Соловей Разбойник.Недавно он разорил соседнюю деревню.Желаешь пойти за его головой?\n1.Да(y)\n2.Нет(n)");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты выходишь на поиски Соловья Разбойника и встречаешь его разоряющего соседнюю деревню.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 1 && fight <= 2)
					{
						printf("Подойдя ближе ты видишь как местные стражники всё ещё пытались остановить Соловья Разбойника.\nС их помощью ты без проблем убиваешь Соловья Разбойника.Получив награду за его голову ты отправляешься домой.Ты победил");
					}
					else if (fight >= 3 && fight <= 5)
					{
						printf("Зайдя в деревню ты увидел,что Соловей Разбойник уже расправился со всеми стражниками в этой деревне.\nТы начинаешь с ним сражение,но не можешь противостоять ему на равных.\nВо время битвы ты получаешь смертельное ранение и погибаешь.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}
				break;
			}
			default:
			{
				printf("Ошибка");
				break;
			}
			}
			break;
		}
		case 3:
		{
			printf("Выберите вашего врага:\n1.Змей Горыныч\n2.Баба Яга\n3.Соловей Разбойник\n");
			scanf("%d", &enemy);
			switch (enemy)
			{
			case 1:
			{
				printf("И так твой враг-Змей горыныч. отправиться в его логово и сразить его?\n1.Да(y)\n2.Нет(n)");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты неделями выслеживаешь логово Змея Горыныча и наконец-то его находишь.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 1 && fight <= 4)
					{
						printf("Достав свой меч ты парой взмахов меча отрубаешь все головы Змею Горынычу.Ты победил");
					}
					else if (fight == 5)
					{
						printf("Достав свой меч ты кинулся на Змея Горыныча,битва была довольно короткой.\nГорыныч нанёс тебе смертельный удар и ты погиб.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}
				break;
			}
			case 2:
			{
				printf("Твой враг-Баба Яга.Желаешь отправиться на поиски чтобы убить её?\n1.Да(y)\n2.Нет(n)\n");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты отправляешься в далекиё леса и болота за Бабой Ягой и наконец-то её находишь.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 3 && fight <= 5)
					{
						printf("Ты начинаешь приближаться к её избе,вооружившись мечём,но тут тебя атакуют ожившие пни.\nТы достаешь меч и начинаешь пробираться к избе раскидывая ожившие деревья.\nНаконец ты врываешься в избу и одним быстрым и точным ударом меча убиваешь Бабу Ягу.Ты победил");
					}
					else if (fight == 1 || fight == 2)
					{
						printf("Ты заходишь в болото где находиться Баба Яга,но вдруг на тебя набрасывается оживший пень и протыкает тебя своей веткой.\n");
						printf("У тебя бы и был был шанс что-то сделать если бы пень был один,но их были десятки,а может и сотни,так ты ещё и ранен.\nТы невыдерживаешься напора пней и получаешь одну фатальную рану,ты погиб.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}

				break;
			}
			case 3:
			{
				printf("Твой враг-Соловей Разбойник.Недавно он разорил соседнюю деревню.Желаешь пойти за его головой?\n1.Да(y)\n2.Нет(n)");
				scanf(" %c", &quest);
				if (quest == 'y')
				{
					printf("Ты выходишь на поиски Соловья Разбойника и встречаешь его разоряющего соседнюю деревню.\n");
					printf("Исход сражения решит твоя удача.Выбери число от 1 до 5\n");
					scanf("%d", &fight);
					if (fight >= 1 && fight <= 2)
					{
						printf("Подойдя ближе ты видишь как местные стражники всё ещё пытались остановить Соловья Разбойника.\nС их помощью ты без проблем убиваешь Соловья Разбойника.Получив награду за его голову ты отправляешься домой.Ты победил");
					}
					else if (fight >= 3 && fight <= 5)
					{
						printf("Зайдя в деревню ты увидел,что Соловей Разбойник уже расправился со всеми стражниками в этой деревне.\nТы начинаешь с ним сражение,но не можешь противостоять ему на равных.\nВо время битвы ты получаешь смертельное ранение и погибаешь.Ты проиграл");
					}
					else
					{
						printf("Ошибка");
					}
				}
				else if (quest == 'n')
				{
					printf("Ты решаешь никуда не идти и остаться дома.Конец");
				}
				else
				{
					printf("Ошибка2");
				}
				break;
			}
			default:
			{
				printf("Ошибка");
				break;
			}
			}
			break;
		}
		default:
		{
			printf("Ошибка");
			break;
		}
		}
	}
	else if (fraction == 2)		//evil
	{
		printf("Выберите персонажа за которого будете играть:\n1.Змей Горыныч\n2.Баба Яга\n3.Соловей Разбойник\n");
		scanf("%d", &character);
		switch (character)
		{
			case 1: //Zmei
			{
				printf("Выберите вашего противника:\n1.Добрыня Никитич\n2.Илья Муромец\n3.Алёша Попович\n");
				scanf("%d", &enemy);
				switch (enemy)
				{
					case 1:
					{
						printf("Ты сидишь в своём логове и тут к тебе нагрянул один из богатырей-Добрыня.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight == 5)
							{
								printf("Одним чётким ударом ты смог убить Добрыню.Ты победил\n");
							}
							else if (fight >= 1 && fight <= 4)
							{
								printf("Богатырь смог убить тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Добрыня будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight == 5)
							{
								printf("Ты смог с лёгкостью сбежать из своего логова и был спасён.Конец");
							}
							else if (fight >= 1 && fight <= 4)
							{
								printf("Ты не смог сбежать  и был убит Добрыней.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
	
						break;
					}
					case 2:
					{
						printf("Ты сидишь в своём логове и тут к тебе нагрянул один из богатырей-Илья.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight == 5)
							{
								printf("Одним чётким ударом ты смог убить Илью.Ты победил\n");
							}
							else if (fight >= 1 && fight <= 4)
							{
								printf("Богатырь смог убить тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Илья будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight == 5)
							{
								printf("Ты смог с лёгкостью сбежать и был спасён.Конец");
							}
							else if (fight >= 1 && fight <= 4)
							{
								printf("Ты не смог сбежать  и был убит Ильёй.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
						break;
					}
					case 3:
					{
						printf("Ты сидишь в своём логове и тут к тебе нагрянул один из богатырей-Алёша.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight == 5)
							{
								printf("Одним чётким ударом ты смог убить Алёшу.Ты победил\n");
							}
							else if (fight >= 1 && fight <= 4)
							{
								printf("Богатырь смог убить тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Алёша будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight == 5)
							{
								printf("Ты смог с лёгкостью сбежать из своего логова и был спасён.Конец");
							}
							else if (fight >= 1 && fight <= 4)
							{
								printf("Ты не смог сбежать  и был убит Алёшой.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
						break;
					}
					default:
					{
						printf("Ошибка");
						break;
					}
				}//до сюда включительно
				break;
			}
			case 2: //Baba Yaga
			{
				printf("Выберите вашего противника:\n1.Добрыня Никитич\n2.Илья Муромец\n3.Алёша Попович\n");
				scanf("%d", &enemy);
				switch (enemy)
				{
					case 1:
					{
						printf("Ты сидишь в своей избе и вдруг ты чувствуешь,что на твоё болото зашёл один из богатырей-Добрыня.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight==1||fight==2)
							{
								printf("Призвав армию живых деревьев ты атакуешь Добрыню и убиваешь его.Ты победил\n");
							}
							else if (fight >= 3 && fight <= 5)
							{
								printf("Богатырь смог добраться до тебя и убил тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Добрыня будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight == 5)
							{
								printf("Ты смог с лёгкостью сбежать из своего болота и был спасён.Конец");
							}
							else if (fight >= 1 && fight <= 4)
							{
								printf("Ты не смог сбежать и был убит Добрыней.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
						break;
					}
					case 2:
					{
						printf("Ты сидишь в своей избе и вдруг ты чувствуешь,что на твоё болото зашёл один из богатырей-Илья.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight==1||fight==2)
							{
								printf("После того как Илья подошёл к твоей избе ты бросил в него склянку с ядом.Обессиленый богатырь упал на землю и ты его добил.Ты победил\n");
							}
							else if (fight >= 3 && fight <= 5)
							{
								printf("Богатырь смог убить тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Илья будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight == 5)
							{
								printf("Ты смог с лёгкостью сбежать и был спасён.Конец");
							}
							else if (fight >= 1 && fight <= 4)
							{
								printf("Ты не смог сбежать  и был убит Ильёй.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
						break;
					}
					case 3:
					{
						printf("Ты сидишь в своей избе и вдруг ты чувствуешь,что на твоё болото зашёл один из богатырей-Алёша.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight==1||fight==2)
							{
								printf("Ты направляешь ожившие деревья атаковать Алёшу и в моменте когда он отвлекается наносишь ему смертельный удар.Ты победил\n");
							}
							else if (fight >= 3 && fight <= 5)
							{
								printf("Богатырь смог убить тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Алёша будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight == 1||fight==2)
							{
								printf("Ты смог с лёгкостью сбежать из своего болота и был спасён.Конец");
							}
							else if (fight >= 3 && fight <= 5)
							{
								printf("Ты не смог сбежать  и был убит Алёшой.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
						break;
					}
					default:
					{
						printf("Ошибка");
						break;
					}
				}//до сюда включительно
				break;
			}
			case 3: //Solovei
			{
				printf("Выберите вашего противника:\n1.Добрыня Никитич\n2.Илья Муромец\n3.Алёша Попович\n");
				scanf("%d", &enemy);
				switch (enemy)
				{
					case 1:
					{
						printf("Ты разоряешь деревню и чтобы остановить тебя приходит богатырь-Добрыня.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight>=3&&fight<=5)
							{
								printf("Использовав свою силу-свист ты сносишь с ног Добрыню и достав свой кинжал добиваешь его.Ты победил\n");
							}
							else if (fight >= 1 && fight <= 2)
							{
								printf("Богатырь смог добраться до тебя и убил тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Добрыня будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight >=3&&fight<=5)
							{
								printf("Ты смог с лёгкостью сбежать из деревни и был спасён.Конец");
							}
							else if (fight >= 1 && fight <= 2)
							{
								printf("Ты не смог сбежать и был убит Добрыней.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
						break;
					}
					case 2:
					{
						printf("Ты разоряешь деревню и чтобы остановить тебя приходит богатырь-Илья.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight>=3&&fight<=5)
							{
								printf("Ты пытаешься сопротивляться богатырю,но уровень сил у вас слишком не равный,кое-как уворачиваясь от атак богатыря ты продолжаешь битву,но Илья наносит роковой удар,но ты не погибаешь,а теряешь сознание.Очнулся ты уже в тюрьме,опять.Ты проиграл\n");
							}
							else if (fight >= 3 && fight <= 5)
							{
								printf("Богатырь смог убить тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Илья будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight >=3&&fight<=5)
							{
								printf("Ты смог с трудом сбежать из деревни,но Илья всё ещё идёт по твоему следу,как долго ты сможешь убегать?.Конец");
							}
							else if (fight >= 1 && fight <= 2)
							{
								printf("Ты не смог сбежать  и был убит Ильёй.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
						break;
					}
					case 3:
					{
						printf("Ты разоряешь деревню и чтобы остановить тебя приходит богатырь-Алёша.\nЧто ты выберишь сражаться или бежать?\n1.Сражаться\n2.Бежать\n");
						scanf("%d", &decision);
						if (decision==1)
						{
							printf("Ты решаешь сражаться.Итог битвы решит удача,выбери число от 1 до 5\n");
							scanf("%d", &fight);
							if (fight>=3&&fight<=5)
							{
								printf("Ты начинаешь атаковать молодого богатыря и с легкостью его побеждаешь.Ты победил\n");
							}
							else if (fight >= 1 && fight <= 2)
							{
								printf("Богатырь смог убить тебя.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else if(decision==2)
						{
							printf("Ты решаешь сбежать,но это не так-то просто,Алёша будет преследовать тебя.Выбери число от 1 до 5 и это решит сбежишь ли ты или нет.\n");
							scanf("%d", &fight);
							if (fight == 1||fight==2)
							{
								printf("Ты смог с лёгкостью сбежать и был спасён.Конец");
							}
							else if (fight >= 3 && fight <= 5)
							{
								printf("Ты не смог сбежать  и был убит Алёшой.Ты проиграл\n");
							}
							else
							{
								printf("Ошибка");
							}
						}
						else
						{
							printf("Ошибка");
						}
						break;
					}
					default:
					{
						printf("Ошибка");
						break;
					}
				}//до сюда включительно
				break;
			}
			default:
			{
				printf("Ошибка");
				break;
			}
		}
	}
	else
	{
		printf("Ошибка");
	}
	//evil
	return 0;
}