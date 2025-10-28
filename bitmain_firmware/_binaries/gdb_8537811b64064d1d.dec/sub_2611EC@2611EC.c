void __fastcall sub_2611EC(char *a1, int *a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r0
  const char **v14; // [sp+8h] [bp-10h] BYREF
  int v15; // [sp+10h] [bp-8h] BYREF
  int v16; // [sp+14h] [bp-4h]

  sub_21D6D8(&v14, a1, 0, 1, 0);
  if ( v14 )
  {
    if ( *((_DWORD *)off_46DBB8 + 4 * (*((unsigned __int8 *)v14 + 32) >> 3)) != 10 )
      sub_94708("\"%s\" exists in this program but is not a function.", a1);
    if ( a2 )
      *a2 = sub_2209C4((int)v14);
    sub_2611B4();
  }
  else
  {
    sub_1B1C10(&v15, a1);
    v4 = v15;
    if ( !v15 )
    {
      if ( !sub_22EBE4() )
        sub_94708("evaluation of this expression requires the target program to be active");
      sub_94708("evaluation of this expression requires the program to have a function \"%s\".", a1);
    }
    v5 = v16;
    sub_1B7278(v16);
    sub_1780DC();
    v7 = sub_1700E8(*(_DWORD **)(v6 + 4));
    v8 = (_DWORD *)sub_170380((int)v7);
    v9 = sub_1700E8(v8);
    v10 = *(__int16 *)(v4 + 22);
    v11 = *(_DWORD *)(v4 + 8);
    if ( v10 == -1 )
    {
      v13 = sub_94728((int)"valops.c", 160, "Section index is uninitialized");
      sub_261320(v13);
    }
    else
    {
      v12 = *(_DWORD *)(*(_DWORD *)(v5 + 144) + 4 * v10);
      if ( a2 )
        *a2 = v5;
      sub_26DCC4(v9, v11 + v12);
    }
  }
}
