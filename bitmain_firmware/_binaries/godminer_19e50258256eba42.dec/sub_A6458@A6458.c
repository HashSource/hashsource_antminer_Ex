int __fastcall sub_A6458(int a1, int *a2, char a3)
{
  size_t v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v14; // [sp+14h] [bp-80h] BYREF
  int v15; // [sp+18h] [bp-7Ch]
  int v16; // [sp+1Ch] [bp-78h]
  int v17; // [sp+20h] [bp-74h]
  int v18; // [sp+24h] [bp-70h]
  int v19; // [sp+28h] [bp-6Ch]
  int v20; // [sp+2Ch] [bp-68h]
  int v21; // [sp+30h] [bp-64h]
  _BYTE v22[32]; // [sp+34h] [bp-60h] BYREF
  int v23; // [sp+54h] [bp-40h] BYREF
  int v24; // [sp+58h] [bp-3Ch]
  int v25; // [sp+5Ch] [bp-38h]
  int v26; // [sp+60h] [bp-34h]
  int v27; // [sp+64h] [bp-30h]
  int v28; // [sp+68h] [bp-2Ch]
  int v29; // [sp+6Ch] [bp-28h]
  int v30; // [sp+70h] [bp-24h]
  int *v31; // [sp+74h] [bp-20h]
  int *v32; // [sp+78h] [bp-1Ch]
  size_t n; // [sp+7Ch] [bp-18h]
  size_t *v34; // [sp+80h] [bp-14h]
  int i; // [sp+84h] [bp-10h]

  v34 = *(size_t **)(a1 + 1132);
  if ( v34 )
  {
    v4 = *v34;
    if ( *v34 >= 8 )
      v4 = 8;
    n = v4;
    if ( a3 && *((_BYTE *)a2 + 444) )
      *(_QWORD *)&dword_5AD508 = 0;
    memset(v34 + 1, 0, *v34);
    if ( n )
    {
      memcpy(v34 + 1, &dword_5AD508, n);
      ++*(_QWORD *)&dword_5AD508;
    }
    memcpy((void *)(a2[75] + a2[22]), v34 + 1, *v34);
    sub_A6384((const unsigned __int8 *)a2[75], (unsigned __int8 *)&v23, a2[74]);
    v14 = v23;
    v15 = v24;
    v16 = v25;
    v17 = v26;
    v18 = v27;
    v19 = v28;
    v20 = v29;
    v21 = v30;
    for ( i = 0; i < a2[81]; ++i )
    {
      memcpy(v22, *(const void **)(a2[82] + 4 * i), sizeof(v22));
      sub_A6384((const unsigned __int8 *)&v14, (unsigned __int8 *)&v23, 0x40u);
      v14 = v23;
      v15 = v24;
      v16 = v25;
      v17 = v26;
      v18 = v27;
      v19 = v28;
      v20 = v29;
      v21 = v30;
    }
    v32 = &v14;
    v31 = &v23;
    sub_A63D0((unsigned int)&v23, (int)&v14);
    memcpy((void *)(a1 + 8), a2 + 116, 0x50u);
    v5 = v24;
    v6 = v25;
    v7 = v26;
    *(_DWORD *)(a1 + 44) = v23;
    *(_DWORD *)(a1 + 48) = v5;
    *(_DWORD *)(a1 + 52) = v6;
    *(_DWORD *)(a1 + 56) = v7;
    v8 = v28;
    v9 = v29;
    v10 = v30;
    *(_DWORD *)(a1 + 60) = v27;
    *(_DWORD *)(a1 + 64) = v8;
    *(_DWORD *)(a1 + 68) = v9;
    *(_DWORD *)(a1 + 72) = v10;
    memcpy((void *)(a1 + 1032), a2 + 372, 0x20u);
    *(_DWORD *)(a1 + 1100) = a2[89];
    *(_QWORD *)a1 = *a2;
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
