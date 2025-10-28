int __fastcall sub_47134(int a1, int *a2, int a3)
{
  char *v5; // r0
  int v7; // lr
  int v8; // r12
  int v9; // r1
  int v10; // lr
  int v11; // r12
  int v12; // r1

  if ( a3 && *((_BYTE *)a2 + 436) )
    *(_QWORD *)&dword_1661F8 = 0;
  if ( a2[20] )
  {
    memcpy(*(void **)(a1 + 1160), &dword_1661F8, *(_DWORD *)(a1 + 1156));
    ++*(_QWORD *)&dword_1661F8;
  }
  v5 = (char *)memcpy((void *)(a1 + 8), a2 + 114, 0x11Eu);
  memcpy(&v5[286 - a2[18]], (const void *)a2[19], a2[18]);
  v7 = a2[371];
  v8 = a2[372];
  v9 = a2[373];
  *(_DWORD *)(a1 + 1032) = a2[370];
  *(_DWORD *)(a1 + 1036) = v7;
  *(_DWORD *)(a1 + 1040) = v8;
  *(_DWORD *)(a1 + 1044) = v9;
  v10 = a2[375];
  v11 = a2[376];
  v12 = a2[377];
  *(_DWORD *)(a1 + 1048) = a2[374];
  *(_DWORD *)(a1 + 1052) = v10;
  *(_DWORD *)(a1 + 1056) = v11;
  *(_DWORD *)(a1 + 1060) = v12;
  *(_QWORD *)a1 = *a2;
  return 0;
}
