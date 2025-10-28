int __fastcall sub_1CE6AC(int a1, int a2, int a3, const char *a4, int a5)
{
  int result; // r0
  int v9; // r6
  _DWORD *v10; // r5
  const char **v11; // t1
  const char *v12; // r0
  int v13; // r2
  int v14; // r0

  result = sub_25A440(a5, "  %s partial symbols:\n", a4);
  if ( a3 > 0 )
  {
    v9 = a3 - 1;
    v10 = (_DWORD *)(a2 - 4);
    do
    {
      sub_258BFC(result);
      v11 = (const char **)v10[1];
      ++v10;
      sub_25A440(a5, "    `%s'", *v11);
      if ( sub_21B7B8(*v10) )
      {
        v12 = (const char *)sub_21B7B8(*v10);
        sub_25A440(a5, "  `%s'", v12);
      }
      sub_25A6E4(", ", a5);
      v13 = *v10;
      switch ( *(_BYTE *)(*v10 + 24) & 7 )
      {
        case 0:
          sub_25A6E4("undefined domain, ", a5);
          v13 = *v10;
          break;
        case 1:
          break;
        case 2:
          sub_25A6E4("struct domain, ", a5);
          v13 = *v10;
          break;
        case 4:
          sub_25A6E4("label domain, ", a5);
          v13 = *v10;
          break;
        default:
          sub_25A6E4("<invalid domain>, ", a5);
          v13 = *v10;
          break;
      }
      switch ( *(unsigned __int8 *)(v13 + 24) >> 3 )
      {
        case 0:
          sub_25A6E4("undefined", a5);
          break;
        case 1:
          sub_25A6E4("constant int", a5);
          break;
        case 2:
          sub_25A6E4("static", a5);
          break;
        case 3:
          sub_25A6E4("register", a5);
          break;
        case 4:
          sub_25A6E4("pass by value", a5);
          break;
        case 5:
          sub_25A6E4("pass by reference", a5);
          break;
        case 6:
          sub_25A6E4("register address parameter", a5);
          break;
        case 7:
          sub_25A6E4("stack parameter", a5);
          break;
        case 8:
          sub_25A6E4("type", a5);
          break;
        case 9:
          sub_25A6E4("label", a5);
          break;
        case 0xA:
          sub_25A6E4("function", a5);
          break;
        case 0xB:
          sub_25A6E4("constant bytes", a5);
          break;
        case 0xC:
          sub_25A6E4("unresolved", a5);
          break;
        case 0xD:
          sub_25A6E4("optimized out", a5);
          break;
        case 0xE:
          sub_25A6E4("computed at runtime", a5);
          break;
        default:
          sub_25A6E4("<invalid location>", a5);
          break;
      }
      sub_25A6E4(", ", a5);
      --v9;
      v14 = sub_25ACB4(a1, *(_DWORD *)(*v10 + 8));
      sub_25A6E4(v14, a5);
      result = sub_25A440(a5, (const char *)&word_356660);
    }
    while ( v9 != -1 );
  }
  return result;
}
