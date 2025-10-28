double __fastcall target_to_double_diff_kda(_DWORD *a1)
{
  int v1; // r1
  char *v2; // lr
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char *v8; // r12
  char v9; // r3
  _DWORD v11[7]; // [sp+0h] [bp-20h] BYREF
  int v12; // [sp+1Ch] [bp-4h] BYREF

  v1 = a1[1];
  v2 = (char *)v11;
  v3 = a1[2];
  v4 = a1[3];
  v11[0] = *a1;
  v11[1] = v1;
  v11[2] = v3;
  v11[3] = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  v8 = (char *)&v12 + 3;
  v11[4] = a1[4];
  v11[5] = v5;
  v11[6] = v6;
  v12 = v7;
  do
  {
    v9 = *v2;
    *v2++ = *v8;
    *v8-- = v9;
  }
  while ( v2 < v8 );
  return le256_target_to_double_diff_base(v11);
}
