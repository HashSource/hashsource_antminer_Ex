int __fastcall sub_5172C(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  _DWORD *v4; // r12
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3

  v1 = a1[7];
  v2 = a1[8];
  v3 = a1[9];
  a1[10] = a1[6];
  a1[11] = v1;
  a1[12] = v2;
  a1[13] = v3;
  v4 = a1 + 6;
  result = a1[2];
  v6 = a1[3];
  v7 = a1[4];
  v8 = a1[5];
  a1[6] = result;
  v4[1] = v6;
  v4[2] = v7;
  v4[3] = v8;
  return result;
}
