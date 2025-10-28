int bitmain_convert_V_to_N()
{
  double v0; // d0
  int v2; // [sp+Ch] [bp-8h]

  switch ( dword_C25FC0 )
  {
    case 'A':
      v2 = (int)(765.411764 - v0 * 35.833333);
      break;
    case 'B':
      v2 = (int)(765.411764 - v0 * 35.833333);
      break;
    case 'C':
      v2 = (int)(933.240365 - v0 * 59.806034);
      break;
    case 'a':
      v2 = (int)(1144.50226 - v0 * 52.243589);
      break;
    case 'q':
    case 'u':
      v2 = (int)(1190.93534 - v0 * 78.742588);
      break;
    case 'r':
      v2 = (int)(1190.93534 - v0 * 78.742588);
      break;
    case 's':
    case 'x':
      v2 = (int)(1280.57782 - v0 * 73.979365);
      break;
    case 't':
    case 'v':
      v2 = (int)(1156.10758 - v0 * 76.090494);
      break;
    default:
      v2 = -1;
      break;
  }
  return v2;
}
