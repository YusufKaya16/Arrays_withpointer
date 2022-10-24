#include <stdio.h>
#include <stdlib.h>

void write_numbers(int *arr, int num);  //Diziye kullanicidan alinan degerleri yazdirir.
void numbers_of_array(int *arr, int num);   //Dizinin elemanlarini ekrana yazdirir.
void number_total(int *arr, int num); //Dizinin elemanlarini toplar.
void create_new_array(int *arr,int num); // ilk dizinin elemanlarini ikinci diziye kopyalar.


int main(){

    int numbers, i;
    printf("kac adet sayi girilecek:"); scanf("%d", &numbers);
    int array[numbers];

    // Dizinin adres bilgisini vererek pointer ile adresleri artirarak deger atamasi yapar. Dizinin adresi, ilk elemanin adresidir.
    write_numbers(&array, numbers);
    numbers_of_array(&array, numbers);
    number_total(&array, numbers);
    create_new_array(&array,numbers);


    return 0;
}

void write_numbers(int *arr, int num){

    int i;

    /* Dizinin adresini birer birer artirarak kullanicidan alinan degerleri diziye yazdirir.Onemli olan dizinin elemanlarinin turu.
    Cunku adres artirimi elemanlarin turune bagli olarak yani, hangi turden eleman bellekte ne kadar yer kapliyorsa o kadar artis yapar.*/

    for(i=0; i<num; i++){
        scanf("%d", (arr+i));
    }
}

void numbers_of_array(int *arr, int num){

    int i;

    printf("Eleman Listesi:");
    printf("[");
    for(i=0; i<num; i++){
        printf("%d ", *(arr+i));
    }
    printf("]\n");

}

void number_total(int *arr, int num){

    int total=0;
    int i;
    for(i=0; i<num; i++){
        total += *(arr+i);
    }
    printf("Elemanlarin toplami: %d\n", total);
}

void create_new_array(int *arr, int num){

    int *arr2[num];
    int i;

    for(i=0; i<num; i++){
        arr2[i] = *(arr + i);
    }
    printf("ikinci array:");

    for(i=0; i<num; i++){
        printf("%d ", *(arr2+i));
    }

}






