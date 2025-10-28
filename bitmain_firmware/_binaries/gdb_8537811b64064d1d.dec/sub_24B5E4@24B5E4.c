void __fastcall sub_24B5E4(int a1)
{
  int v2; // r6
  int v3; // r5
  void *v4; // r0

  if ( dword_48A8BC != a1 )
  {
    v2 = off_489BC0(&dword_4899A0, 0);
    if ( v2 != a1 )
      sub_946D8("could not change traceframe");
    sub_247A48(v2);
    sub_1DDD1C();
    v3 = dword_48A918;
    dword_48A918 = 0;
    if ( v3 )
    {
      v4 = *(void **)(v3 + 12);
      if ( v4 )
        sub_339E8C(v4);
      if ( *(_DWORD *)v3 )
        sub_339E8C(*(void **)v3);
      sub_349290((void *)v3);
    }
  }
}
