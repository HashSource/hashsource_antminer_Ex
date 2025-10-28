int __fastcall sub_15F810(_BOOL4 a1)
{
  int v1; // r3
  const char *v3; // r5
  int v4; // r0

  v1 = dword_487754;
  if ( !dword_487754 )
  {
    v3 = (const char *)a1;
    if ( !a1 || (a1 = sub_15D52C(a1)) )
    {
      v4 = sub_15F734(a1);
      dword_487754 = v4;
      if ( v4 )
      {
        sub_15E0B4(v4);
        v1 = dword_487754;
        if ( dword_487754 )
          return v1;
      }
      sub_94728(
        (int)"frame.c",
        1650,
        "%s: Assertion `%s' failed.",
        "frame_info* get_selected_frame(const char*)",
        "selected_frame != NULL");
    }
    sub_94708("%s", v3);
  }
  return v1;
}
