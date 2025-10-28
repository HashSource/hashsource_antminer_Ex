json_t *__fastcall sub_5221C(double a1)
{
  int *v3; // [sp+Ch] [bp-10h]
  json_t *v4; // [sp+14h] [bp-8h]

  v3 = (int *)LODWORD(a1);
  v4 = json_real(a1);
  if ( v4 )
  {
    if ( json_real_set((int)v4) )
    {
      sub_51400((int)v4);
      sub_5177C(v3, "<args>", 15, "Invalid floating point value");
      v3[19] = 1;
      return 0;
    }
    else
    {
      return v4;
    }
  }
  else
  {
    sub_5177C(v3, "<internal>", 1, "Out of memory");
    v3[19] = 1;
    return 0;
  }
}
