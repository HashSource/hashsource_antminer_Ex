int __fastcall sub_87BC4(int a1, int a2)
{
  int result; // r0
  int v3; // [sp+0h] [bp-3Ch]
  _DWORD v5[4]; // [sp+8h] [bp-34h]
  _DWORD v6[4]; // [sp+18h] [bp-24h]
  int v7; // [sp+28h] [bp-14h]
  int v8; // [sp+2Ch] [bp-10h]
  int i; // [sp+30h] [bp-Ch]
  int v10; // [sp+34h] [bp-8h]

  v3 = a2;
  v6[0] = 65;
  v6[1] = 43;
  v6[2] = 37;
  v6[3] = 32;
  result = -1046478848;
  v5[0] = -1046478848;
  v5[1] = -1054867456;
  v5[2] = 0;
  v5[3] = 0;
  v10 = 0;
  v8 = 4;
  if ( a2 >= dword_5990B4 )
  {
    if ( a2 > dword_5990B4 )
      v3 = a2 - 1;
  }
  else
  {
    v3 = a2 + 1;
  }
  v7 = v3 - *(_DWORD *)(a1 + 88);
  dword_5990B4 = v3;
  for ( i = 0; i < v8 - 1; ++i )
  {
    if ( v7 > v6[i + 1] && v7 <= v6[i] )
    {
      v10 = v5[i];
      return result;
    }
  }
  return result;
}
