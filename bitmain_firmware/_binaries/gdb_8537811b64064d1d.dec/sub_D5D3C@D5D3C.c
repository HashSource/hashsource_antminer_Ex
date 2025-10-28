int *__fastcall sub_D5D3C(_BYTE *a1)
{
  int v2; // r5
  int *result; // r0
  int v4; // r0

  v2 = sub_D5520(a1, 0, (int (__fastcall *)(_DWORD *))sub_C6928);
  result = (int *)sub_243004(v2);
  if ( !v2 )
  {
    v4 = *result;
    if ( a1 && *a1 )
      return (int *)sub_2573B4(v4, "No watchpoint matching '%s'.\n");
    else
      return (int *)sub_2573B4(v4, "No watchpoints.\n");
  }
  return result;
}
