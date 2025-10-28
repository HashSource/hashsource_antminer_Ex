_DWORD *__fastcall sub_8CF60(_DWORD *a1)
{
  _DWORD *v2; // r4
  void *v4; // r0
  const char *v5; // [sp+8h] [bp-24h]
  size_t v6; // [sp+Ch] [bp-20h]
  void *ptr[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v8[20]; // [sp+18h] [bp-14h] BYREF

  sub_1FA334(ptr, dword_487CD0);
  if ( *a1 != 40 )
  {
    sub_94728(
      "rust-exp.y",
      987,
      "%s: Assertion `%s' failed.",
      "const rust_op* crate_name(const rust_op*)",
      "name->opcode == OP_VAR_VALUE");
    v4 = ptr[0];
    if ( ptr[0] != v8 )
      sub_339E8C(ptr[0]);
    sub_339024(v4);
  }
  if ( !ptr[1] )
    sub_94708("Could not find crate for current location");
  v5 = (const char *)sub_163544(dword_4751A4);
  v6 = strlen(v5);
  v2 = sub_8CDB4((int)v5, v6, a1[10]);
  if ( ptr[0] != v8 )
    sub_339E8C(ptr[0]);
  return v2;
}
