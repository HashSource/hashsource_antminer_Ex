int __fastcall target_to_double_diff_kda(int a1)
{
  __int64 *v1; // lr
  __int64 *v2; // r12
  int v3; // r1
  __int64 v4; // r2
  int v5; // r1
  __int64 v6; // r2
  char v7; // r3
  __int64 v9; // [sp+0h] [bp-24h] BYREF
  __int64 v10; // [sp+8h] [bp-1Ch]
  __int64 v11; // [sp+10h] [bp-14h]
  __int64 v12; // [sp+18h] [bp-Ch] BYREF

  v1 = (__int64 *)((char *)&v12 + 7);
  v2 = &v9;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_QWORD *)(a1 + 8);
  LODWORD(v9) = *(_DWORD *)a1;
  HIDWORD(v9) = v3;
  v10 = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_QWORD *)(a1 + 24);
  LODWORD(v11) = *(_DWORD *)(a1 + 16);
  HIDWORD(v11) = v5;
  v12 = v6;
  do
  {
    v7 = *(_BYTE *)v2;
    *(_BYTE *)v2 = *(_BYTE *)v1;
    v2 = (__int64 *)((char *)v2 + 1);
    *(_BYTE *)v1 = v7;
    v1 = (__int64 *)((char *)v1 - 1);
  }
  while ( v2 < v1 );
  sub_12D08C(v12);
  sub_12D08C(v11);
  sub_12D08C(v10);
  return sub_12D08C(v9);
}
