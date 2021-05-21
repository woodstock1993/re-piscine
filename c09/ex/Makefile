# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasuh <jasuh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 18:44:22 by jasuh             #+#    #+#              #
#    Updated: 2021/05/21 18:45:58 by jasuh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

test : main.o write.o read.o
	gcc -o test main.o write.o read.o

main.o : main.c io.h
	gcc -o main.o main.c 

write.o : write.c io.h
	gcc -c write.c

read.o : read.c io.h
	gcc -c read.c
