/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:23:13 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/28 22:03:01 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define BlancoI "\033[1;37m"
#define Blanco "\033[0;37m"
#define RojoI "\033[1;31m"
#define Rojo "\033[0;31m"
#define AzulI "\033[1;34m"
#define Azul "\033[0;34m"
#define VerdeI "\033[1;32m"
#define Verde "\033[0;32m"
#define AmarilloI "\033[1;33m"
#define Amarillo "\033[0;33m"
#define CelesteI "\033[1;36m"
#define Celeste "\033[0;36m"
#define Reset "\033[0m"

int main()
{
	printf("\n");	
	printf("%sUse:\t\"%s\\033[%s<0,1,2>%s;", BlancoI, AzulI, AmarilloI, AzulI);
	printf("%s<color>%sm%s <Text> ", RojoI, AzulI, VerdeI);
	printf("%s\\033[0m%s\"\n\n", AzulI, Reset);
	printf("%sExample: \"%s\\033[1;36m ", Blanco, CelesteI);
	printf("%sThis is text", VerdeI);
	printf(" %s\\033[0m%s\"\n\n", CelesteI, Reset);
	
	for (int i = 30; i <= 37; i++)
		printf("\033[%dm%d\t\t\033[%dm%d\n", i, i, i + 60, i + 60);

    return 0;
}
