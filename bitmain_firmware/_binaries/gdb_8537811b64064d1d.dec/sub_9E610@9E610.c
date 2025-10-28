size_t __fastcall sub_9E610(const char *a1)
{
  int v2; // r0

  if ( !a1 )
    return 0;
  v2 = sub_338BFC(a1, "___");
  if ( v2 )
    return v2 - (_DWORD)a1;
  else
    return strlen(a1);
}
