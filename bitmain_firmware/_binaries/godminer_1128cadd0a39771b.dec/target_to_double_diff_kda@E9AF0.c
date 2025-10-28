double __fastcall target_to_double_diff_kda(int *a1)
{
  char *v1; // lr
  char *v2; // r12
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char v9; // r3
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v15; // [sp+0h] [bp-24h] BYREF
  int v16; // [sp+4h] [bp-20h]
  int v17; // [sp+8h] [bp-1Ch]
  int v18; // [sp+Ch] [bp-18h]
  int v19; // [sp+10h] [bp-14h]
  int v20; // [sp+14h] [bp-10h]
  int v21; // [sp+18h] [bp-Ch]
  int v22; // [sp+1Ch] [bp-8h] BYREF

  v1 = (char *)&v22 + 3;
  v2 = (char *)&v15;
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v15 = *a1;
  v16 = v3;
  v17 = v4;
  v18 = v5;
  v6 = a1[5];
  v7 = a1[6];
  v8 = a1[7];
  v19 = a1[4];
  v20 = v6;
  v21 = v7;
  v22 = v8;
  do
  {
    v9 = *v2;
    v10 = (unsigned __int8)*v1;
    *v2++ = v10;
    *v1-- = v9;
  }
  while ( v2 < v1 );
  sub_12E694(v21, v22, v10);
  sub_12E694(v19, v20, v11);
  sub_12E694(v17, v18, v12);
  return sub_12E694(v15, v16, v13);
}
