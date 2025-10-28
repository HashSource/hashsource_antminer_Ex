int __fastcall sub_4A5A4(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v9; // [sp+14h] [bp-28h]
  int v10; // [sp+18h] [bp-24h]
  signed int v11; // [sp+20h] [bp-1Ch]
  int v12; // [sp+24h] [bp-18h]
  int v13; // [sp+28h] [bp-14h]
  int v14; // [sp+2Ch] [bp-10h]
  int j; // [sp+30h] [bp-Ch]
  signed int i; // [sp+34h] [bp-8h]

  v13 = a2 - a1;
  v12 = a3 - a2;
  v11 = sub_4A530(a2 - a1, a3 - a2);
  result = sub_344EB8(a3 - a1, v11);
  for ( i = 0; i < v11; ++i )
  {
    v10 = a2 + i;
    v14 = a2 + i;
    for ( j = 0; j < result; ++j )
    {
      if ( v14 < a2 )
        v14 += v12;
      else
        v14 -= v13;
      v9 = *(_DWORD *)(a4 + 4 * v14);
      *(_DWORD *)(a4 + 4 * v14) = *(_DWORD *)(a4 + 4 * v10);
      *(_DWORD *)(a4 + 4 * v10) = v9;
    }
  }
  return result;
}
