_DWORD *__fastcall sub_D5CC8(_BYTE *a1)
{
  int v2; // r5
  int v3; // r0

  v2 = *(_DWORD *)sub_243004(a1);
  v3 = sub_D5520(a1, 0, (int (__fastcall *)(_DWORD *))sub_C6910);
  if ( !v3 )
  {
    if ( a1 && *a1 )
      v3 = sub_2573B4(v2, "No tracepoint matching '%s'.\n", a1);
    else
      v3 = sub_2573B4(v2, "No tracepoints.\n");
  }
  return sub_C7B40(v3);
}
