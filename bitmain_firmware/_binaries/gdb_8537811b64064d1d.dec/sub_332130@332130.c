int *__fastcall sub_332130(int *a1, unsigned __int8 *a2, int a3)
{
  int v7[4]; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v8[12]; // [sp+14h] [bp-1Ch] BYREF
  int v9; // [sp+20h] [bp-10h]
  int v10; // [sp+28h] [bp-8h]

  sub_3312D4((int)v8, 32);
  v9 = *(_DWORD *)(a3 + 12);
  sub_329A38((int)v7, a2, (int)v8);
  sub_331AB4(a1, v7, (int)v8);
  if ( v10 )
    sub_33140C(a3, v10);
  return a1;
}
