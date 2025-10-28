void *sub_33ABDC()
{
  void *v0; // r3

  v0 = malloc(0x78u);
  if ( !v0 )
  {
    v0 = sub_33AA80(0x78u);
    if ( !v0 )
      sub_3397A8();
  }
  return memset(v0, 0, 0x78u);
}
