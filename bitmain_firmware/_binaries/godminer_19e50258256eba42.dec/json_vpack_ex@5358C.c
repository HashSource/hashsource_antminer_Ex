json_t *__fastcall json_vpack_ex(json_error_t *a1, int a2, _BYTE *a3, int a4)
{
  double v5; // r0
  int v11; // [sp+18h] [bp-5Ch] BYREF
  int v12[9]; // [sp+1Ch] [bp-58h] BYREF
  char v13; // [sp+40h] [bp-34h]
  json_t *v14; // [sp+6Ch] [bp-8h]

  if ( a3 && *a3 )
  {
    jsonp_error_init(a1, 0);
    sub_51468(v12, (int)a1, a2, (int)a3);
    sub_5153C(v12);
    v11 = a4;
    HIDWORD(v5) = &v11;
    LODWORD(v5) = v12;
    v14 = sub_522E0(v5);
    if ( v14 )
    {
      sub_5153C(v12);
      if ( v13 )
      {
        sub_51400((int)v14);
        sub_5177C(v12, "<format>", 9, "Garbage after format string");
        return 0;
      }
      else
      {
        return v14;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    jsonp_error_init(a1, "<format>");
    jsonp_error_set((int)a1, -1, -1, 0, 4, "NULL or empty format string");
    return 0;
  }
}
