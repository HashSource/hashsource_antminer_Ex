double __fastcall target_to_double_diff_kda(_DWORD *a1)
{
  int v1; // r1
  unsigned __int8 *v2; // lr
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  unsigned __int8 *v8; // r12
  int v9; // r3
  int v10; // r2
  _DWORD v12[7]; // [sp+0h] [bp-20h] BYREF
  int v13; // [sp+1Ch] [bp-4h] BYREF

  v1 = a1[1];
  v2 = (unsigned __int8 *)v12;
  v3 = a1[2];
  v4 = a1[3];
  v12[0] = *a1;
  v12[1] = v1;
  v12[2] = v3;
  v12[3] = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  v8 = (unsigned __int8 *)&v13 + 3;
  v12[4] = a1[4];
  v12[5] = v5;
  v12[6] = v6;
  v13 = v7;
  do
  {
    v9 = *v2;
    v10 = *v8;
    *v2++ = v10;
    *v8-- = v9;
  }
  while ( v2 < v8 );
  return le256_target_to_double_diff_base(v12, v5, v10, v9);
}
