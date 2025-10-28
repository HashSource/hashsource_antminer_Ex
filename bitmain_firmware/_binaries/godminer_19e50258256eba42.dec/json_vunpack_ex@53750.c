int __fastcall json_vunpack_ex(const json_t *a1, json_error_t *a2, int a3, _BYTE *a4, const char **a5)
{
  const char **v11; // [sp+1Ch] [bp-58h] BYREF
  int v12[9]; // [sp+20h] [bp-54h] BYREF
  char v13; // [sp+44h] [bp-30h]

  if ( a1 )
  {
    if ( a4 && *a4 )
    {
      jsonp_error_init(a2, 0);
      sub_51468(v12, (int)a2, a3, (int)a4);
      sub_5153C(v12);
      v11 = a5;
      if ( sub_52DB0((int)v12, a1, &v11) )
      {
        return -1;
      }
      else
      {
        sub_5153C(v12);
        if ( v13 )
        {
          sub_5177C(v12, "<format>", 9, "Garbage after format string");
          return -1;
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      jsonp_error_init(a2, "<format>");
      jsonp_error_set((int)a2, -1, -1, 0, 4, "NULL or empty format string");
      return -1;
    }
  }
  else
  {
    jsonp_error_init(a2, "<root>");
    jsonp_error_set((int)a2, -1, -1, 0, 12, "NULL root value");
    return -1;
  }
}
