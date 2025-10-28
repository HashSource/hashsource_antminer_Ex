int sub_4ED28(int result, int a2, int a3, const char *a4, ...)
{
  int v6; // [sp+1Ch] [bp-164h]
  char v7[159]; // [sp+20h] [bp-160h] BYREF
  char v8; // [sp+BFh] [bp-C1h]
  char s[160]; // [sp+C0h] [bp-C0h] BYREF
  __gnuc_va_list arg; // [sp+160h] [bp-20h]
  const char *v11; // [sp+164h] [bp-1Ch]
  char v12[4]; // [sp+168h] [bp-18h]
  int v13; // [sp+16Ch] [bp-14h]
  int v14; // [sp+170h] [bp-10h]
  int v15; // [sp+174h] [bp-Ch]
  const char *varg_r3; // [sp+184h] [bp+4h]
  va_list va; // [sp+188h] [bp+8h] BYREF

  va_start(va, a4);
  varg_r3 = a4;
  v6 = result;
  v15 = -1;
  v14 = -1;
  v13 = 0;
  *(_DWORD *)v12 = s;
  if ( result )
  {
    va_copy(arg, va);
    vsnprintf(s, 0xA0u, varg_r3, va);
    s[159] = 0;
    if ( a2 )
    {
      v11 = strbuffer_value((const strbuffer_t *)(a2 + 40));
      v15 = *(_DWORD *)(a2 + 24);
      v14 = *(_DWORD *)(a2 + 28);
      v13 = *(_DWORD *)(a2 + 36);
      if ( v11 && *v11 )
      {
        if ( *(_DWORD *)(a2 + 44) <= 0x14u )
        {
          snprintf(v7, 0xA0u, "%s near '%s'", s, v11);
          v8 = 0;
          *(_DWORD *)v12 = v7;
        }
      }
      else
      {
        if ( a3 == 8 )
          LOBYTE(a3) = 6;
        if ( *(_DWORD *)(a2 + 20) == -2 )
        {
          *(_DWORD *)v12 = s;
        }
        else
        {
          snprintf(v7, 0xA0u, "%s near end of file", s);
          v8 = 0;
          *(_DWORD *)v12 = v7;
        }
      }
    }
    return jsonp_error_set(v6, v15, v14, v13, a3, "%s", *(const char **)v12);
  }
  return result;
}
