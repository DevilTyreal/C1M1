/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stat.h
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author muhammad amir is'ad
 * @date 25 april 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

extern void print_statistics(unsigned char *array, unsigned int size);

extern void print_array(const unsigned char *array, unsigned int size);

extern unsigned char cal_median(unsigned char *array, unsigned int size);

extern unsigned char cal_mean(const unsigned char *array, unsigned int size);

extern unsigned char cal_maximum(const unsigned char *array, unsigned int size);

extern unsigned char cal_minimum(const unsigned char *array, unsigned int size);

extern void sort_array(unsigned char *array, unsigned int size);

extern void swap(unsigned char* a, unsigned char*b);

#endif /* __STATS_H__ */
