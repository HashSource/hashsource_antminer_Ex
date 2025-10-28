int __fastcall sub_139F4(int a1, int a2)
{
  clock_t v3; // r0
  __int64 v4; // r6
  int v6; // r2

  v3 = clock();
  v4 = sub_2F6A8(
         COERCE_UNSIGNED_INT64((double)v3 / 1000000.0 * 1000000000.0),
         HIDWORD(COERCE_UNSIGNED_INT64((double)v3 / 1000000.0 * 1000000000.0)));
  *(_QWORD *)a2 = sub_2F668(v4, HIDWORD(v4), 1000000000, 0);
  sub_2F668(v4, HIDWORD(v4), 1000000000, 0);
  *(_DWORD *)(a2 + 8) = v6;
  return 0;
}
