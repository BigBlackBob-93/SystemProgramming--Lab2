#include "sortings.h"

void bubble_sort(int *arr, int len) {
    int j = 0;
    __asm {
            mov ecx, len
            dec ecx
            mov edi, 0
            I:
                cmp edi, ecx
                jg END // >
                inc edi
                mov j, 0
                mov edx, ecx
                sub edx, edi
                mov esi, arr
            J:
                cmp j, edx
                jg I // >
                mov eax, [esi]
                cmp [esi+4], eax
                jl EXCHANGE // <
            NEXT:
                inc j
                add esi, 4
                jmp J
            EXCHANGE:
                mov ebx, [esi + 4]
                mov [esi], ebx
                mov [esi + 4], eax
                jmp NEXT
            END:
    }
}