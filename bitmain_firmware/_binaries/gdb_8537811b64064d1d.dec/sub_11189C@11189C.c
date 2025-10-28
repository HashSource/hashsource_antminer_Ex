_DWORD *__fastcall sub_11189C(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)ptr[16];
  *ptr = &unk_39C0AC;
  if ( v2 )
    sub_339E8C(v2);
  v3 = (void *)ptr[1];
  if ( v3 )
    sub_339E8C(v3);
  sub_33AC2C(ptr);
  return ptr;
}
