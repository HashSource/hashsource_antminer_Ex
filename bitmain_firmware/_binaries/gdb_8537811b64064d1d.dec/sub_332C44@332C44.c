int *__fastcall sub_332C44(int *a1, unsigned __int8 *a2, int a3)
{
  int v7[6]; // [sp+4h] [bp-34h] BYREF
  _BYTE v8[12]; // [sp+1Ch] [bp-1Ch] BYREF
  int v9; // [sp+28h] [bp-10h]
  int v10; // [sp+30h] [bp-8h]

  sub_3312D4((int)v8, 64);
  v9 = *(_DWORD *)(a3 + 12);
  sub_329A38((int)v7, a2, (int)v8);
  sub_332974(a1, v7, (int)v8);
  if ( v10 )
    sub_33140C(a3, v10);
  return a1;
}
