int __fastcall sub_8C474(const char *a1)
{
  __int64 v3; // r0
  int result; // r0

  v3 = *(_QWORD *)*(_DWORD *)(*(_DWORD *)(dword_4751A0 + 72) + 4);
  result = sub_1946F0(v3, HIDWORD(v3), a1);
  if ( !result )
    sub_94708("Could not find Rust type %s", a1);
  return result;
}
