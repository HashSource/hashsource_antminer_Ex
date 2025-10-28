__int64 __fastcall generate_sipkeys_ae(int a1, int a2, _QWORD *a3)
{
  __int64 v4; // r2
  __int64 v5; // r4
  __int64 result; // r0
  _QWORD v7[4]; // [sp+0h] [bp-20h] BYREF

  blake2b(v7, a1, a2);
  v4 = v7[1];
  v5 = v7[2];
  *a3 = v7[0];
  result = v7[3];
  a3[1] = v4;
  a3[2] = v5;
  a3[3] = result;
  return result;
}
