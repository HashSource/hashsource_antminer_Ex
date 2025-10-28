int __fastcall target_to_diff_kda(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  _DWORD v9[8]; // [sp+Ch] [bp-30h] BYREF
  int j; // [sp+2Ch] [bp-10h]
  int i; // [sp+30h] [bp-Ch]
  unsigned __int8 v12; // [sp+37h] [bp-5h]

  v12 = 0;
  v1 = a1[1];
  v2 = a1[2];
  v3 = a1[3];
  v9[0] = *a1;
  v9[1] = v1;
  v9[2] = v2;
  v9[3] = v3;
  v4 = a1[5];
  v5 = a1[6];
  v6 = a1[7];
  v9[4] = a1[4];
  v9[5] = v4;
  v9[6] = v5;
  v9[7] = v6;
  sub_A5730((char *)v9, 32);
  for ( i = 31; i >= 0; --i )
  {
    for ( j = 7; j >= 0; --j )
    {
      if ( (((int)*((unsigned __int8 *)v9 + i) >> j) & 1) != 0 )
        return v12;
      ++v12;
    }
  }
  return v12;
}
