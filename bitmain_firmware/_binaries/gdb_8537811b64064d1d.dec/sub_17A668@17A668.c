int sub_17A668()
{
  int v1; // [sp+8h] [bp-8h] BYREF

  sub_21D6D8(&v1, "std::type_info", 0, 2, 0);
  if ( !v1 )
    JUMPOUT(0x16ECB0);
  return *(_DWORD *)(v1 + 24);
}
