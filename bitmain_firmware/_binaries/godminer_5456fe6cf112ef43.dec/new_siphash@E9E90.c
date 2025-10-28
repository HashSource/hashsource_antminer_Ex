_DWORD *new_siphash()
{
  _DWORD *v0; // r4
  __int64 v1; // r2

  v0 = calloc(1u, 0x60u);
  if ( !v0 )
    puts("siphash calloc failed!");
  LODWORD(v1) = sub_E9DD8;
  HIDWORD(v1) = sub_E9C6C;
  v0[18] = sub_E9E3C;
  v0[19] = sub_E9C98;
  *((_QWORD *)v0 + 10) = v1;
  return v0;
}
