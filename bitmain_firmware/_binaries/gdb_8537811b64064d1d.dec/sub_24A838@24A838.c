void sub_24A838()
{
  int v0; // r4
  void *v1; // r0

  sub_247A48(-1);
  sub_247A78(-1);
  sub_247AA8(0);
  v0 = dword_48A918;
  dword_48A918 = 0;
  if ( v0 )
  {
    v1 = *(void **)(v0 + 12);
    if ( v1 )
      sub_339E8C(v1);
    if ( *(_DWORD *)v0 )
      sub_339E8C(*(void **)v0);
    sub_349290((void *)v0);
  }
}
