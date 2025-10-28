_DWORD *hs_header_alloc()
{
  _DWORD *v1; // [sp+4h] [bp-8h]

  v1 = malloc(0x108u);
  hs_header_init(v1);
  return v1;
}
