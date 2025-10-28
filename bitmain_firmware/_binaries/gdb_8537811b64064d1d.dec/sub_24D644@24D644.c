void *sub_24D644()
{
  void *result; // r0
  int v1; // r5
  void *v2; // r0
  void **v3; // r5
  void *v4; // r0
  void *ptr; // [sp+4h] [bp-8h] BYREF

  result = (void *)dword_48A918;
  if ( !dword_48A918 )
  {
    off_489C04(&ptr);
    v1 = dword_48A918;
    result = ptr;
    ptr = 0;
    dword_48A918 = (int)result;
    if ( v1 )
    {
      v2 = *(void **)(v1 + 12);
      if ( v2 )
        sub_339E8C(v2);
      if ( *(_DWORD *)v1 )
        sub_339E8C(*(void **)v1);
      sub_33AC2C((void *)v1);
      v3 = (void **)ptr;
      if ( ptr )
      {
        v4 = (void *)*((_DWORD *)ptr + 3);
        if ( v4 )
          sub_339E8C(v4);
        if ( *v3 )
          sub_339E8C(*v3);
        sub_33AC2C(v3);
      }
      return (void *)dword_48A918;
    }
  }
  return result;
}
