void __noreturn sub_33D620()
{
  int v0; // r0
  const char *v1; // r5
  char *v2; // r6
  int v3; // [sp+4h] [bp-4h] BYREF

  if ( !byte_48FF14 )
  {
    byte_48FF14 = 1;
    v0 = sub_344134();
    if ( v0 )
    {
      v1 = *(const char **)(v0 + 4);
      if ( *v1 == 42 )
        ++v1;
      v3 = -1;
      v2 = (char *)sub_34403C(v1, 0, 0, &v3);
      fwrite("terminate called after throwing an instance of '", 1u, 0x30u, (FILE *)stderr);
      if ( v3 )
        fputs(v1, (FILE *)stderr);
      else
        fputs(v2, (FILE *)stderr);
      fwrite("'\n", 1u, 2u, (FILE *)stderr);
      if ( !v3 )
        free(v2);
      sub_33A7E0();
    }
    fwrite("terminate called without an active exception\n", 1u, 0x2Du, (FILE *)stderr);
    abort();
  }
  fwrite("terminate called recursively\n", 1u, 0x1Du, (FILE *)stderr);
  abort();
}
