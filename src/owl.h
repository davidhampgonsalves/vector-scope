int owl_frameCount = 15;
int owl_framePointCounts[] = { 172,172,170,170,160,154,152,160,166,156,170,178,174,174,184 };
uint8_t owl_framePoints0[] = { 98,139,88,141,78,141,71,144,76,151,77,154,82,161,89,162,98,157,107,158,115,163,125,165,135,165,145,165,155,165,164,163,168,154,169,145,168,136,159,132,149,130,139,130,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,134,134,127,126,122,118,116,110,110,102,102,97,93,92,84,88,75,84,66,80,56,76,47,73,37,71,30,75,31,80,38,87,42,91,50,96,59,101,67,107,75,113,83,119,89,127,93,135,255,255,160,131,166,124,173,117,181,110,187,103,194,96,201,88,206,80,211,71,210,61,204,53,195,57,188,64,181,71,174,78,167,85,159,91,152,98,144,104,136,110,131,119,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints1[] = { 100,141,90,143,80,144,71,145,77,151,76,155,82,162,90,162,98,157,107,159,116,163,125,165,135,165,145,165,155,165,164,163,168,154,169,145,168,135,159,132,149,130,139,130,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,134,134,127,127,120,120,113,112,106,106,97,100,88,96,79,91,70,87,61,84,51,81,42,78,32,78,34,84,35,88,39,95,48,97,56,103,64,110,71,116,79,123,87,128,93,136,255,255,160,131,168,124,175,118,183,111,189,104,196,97,203,89,210,82,214,73,214,63,209,55,201,55,194,62,187,69,180,76,172,83,165,90,158,96,150,103,142,108,135,115,129,123,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints2[] = { 100,141,90,142,80,144,70,145,77,151,76,155,82,162,89,162,98,157,107,158,115,163,125,165,135,165,145,165,155,165,164,162,168,154,169,144,168,135,158,131,148,130,139,130,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,133,134,125,129,116,124,109,117,100,112,91,109,81,105,72,102,62,99,53,96,43,94,33,93,31,97,32,101,40,106,46,111,56,115,65,120,73,124,82,129,90,135,98,140,255,255,162,132,171,127,179,122,187,117,196,111,204,105,211,99,219,92,225,84,226,74,221,66,213,64,205,70,197,76,189,82,181,88,173,94,165,100,157,106,148,111,140,116,133,124,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints3[] = { 100,142,91,144,81,146,71,149,78,152,76,156,83,163,90,162,99,157,107,160,116,164,126,165,136,166,146,166,156,166,164,162,168,153,169,144,167,135,158,132,148,130,138,131,128,133,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,130,136,122,130,114,125,105,119,96,116,86,113,77,110,67,108,57,106,47,105,37,104,27,104,32,110,33,113,41,118,48,123,58,126,67,128,77,132,86,135,94,140,255,255,165,134,174,130,183,125,191,120,200,115,209,110,217,105,224,98,230,90,230,80,225,72,216,76,207,81,199,86,190,91,182,97,173,102,165,107,156,112,147,117,139,122,131,128,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints4[] = { 79,153,79,160,86,164,95,159,104,157,112,162,122,165,132,166,142,166,152,165,161,165,167,158,168,148,169,139,162,133,152,131,142,130,132,132,123,134,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,130,136,120,134,110,133,101,131,91,131,81,131,71,132,61,133,51,134,41,133,34,135,36,139,42,143,51,145,59,150,69,152,79,153,89,150,97,146,107,143,117,142,127,142,255,255,171,139,180,136,190,133,200,131,210,129,219,126,229,123,237,118,243,110,244,101,239,94,231,100,222,104,213,108,203,111,194,113,184,116,174,119,165,122,155,125,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints5[] = { 110,162,119,165,129,165,139,165,149,165,159,166,167,160,167,150,169,141,164,134,154,131,144,130,134,132,125,134,115,136,105,139,96,141,86,143,76,144,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,130,136,120,136,110,138,101,141,91,143,81,145,71,146,63,151,57,157,49,163,51,171,58,177,68,177,78,177,88,176,98,173,106,168,111,159,118,152,127,147,255,255,170,146,180,146,190,146,199,149,209,152,219,154,229,153,238,149,246,144,249,134,244,133,235,136,225,136,215,134,205,133,195,131,185,130,175,130,165,130,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints6[] = { 124,165,134,165,144,165,154,165,163,163,168,155,169,146,169,136,160,132,150,130,140,130,130,133,121,135,111,138,101,140,92,142,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,128,142,118,142,108,142,99,143,89,145,79,149,79,154,77,158,70,166,71,173,66,180,63,190,67,199,72,207,80,212,90,211,99,207,107,201,114,194,118,184,120,175,123,165,125,155,131,148,255,255,170,149,179,153,188,157,196,162,205,168,213,173,223,176,233,176,242,173,245,168,235,168,225,167,216,164,206,160,197,156,188,151,180,146,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints7[] = { 124,165,134,165,144,165,154,165,163,164,168,155,169,146,169,136,160,132,150,130,140,130,131,133,121,135,111,138,101,140,92,142,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,129,142,119,141,109,141,99,143,89,146,80,150,82,152,90,151,82,157,76,165,71,174,75,181,73,190,70,199,72,208,78,216,86,222,96,220,104,215,111,208,118,201,121,191,122,182,123,172,125,162,129,153,255,255,162,166,170,172,179,177,187,183,196,187,205,191,215,193,225,195,234,192,243,187,248,179,239,181,229,181,219,179,211,173,204,167,196,160,187,155,179,150,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints8[] = { 124,165,134,165,144,165,154,165,163,163,168,155,169,146,169,136,160,132,150,130,140,130,130,132,121,135,111,137,101,140,92,143,82,146,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,129,142,119,141,109,141,99,143,89,147,80,151,82,152,90,152,83,159,80,169,78,179,80,188,83,198,83,208,85,216,89,224,95,226,102,224,109,217,115,209,119,200,121,190,122,180,123,171,123,161,124,151,132,144,255,255,158,167,163,175,168,183,176,190,185,195,193,200,201,205,210,210,218,210,225,215,224,205,219,196,225,193,219,184,213,177,206,169,199,162,191,156,182,151,173,147,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints9[] = { 157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,82,147,76,155,73,164,77,173,79,183,78,193,80,203,84,212,93,215,96,205,100,196,104,187,108,178,111,168,114,159,117,149,125,143,255,255,157,167,165,172,172,172,177,181,185,186,194,191,202,195,209,202,215,199,221,200,222,190,221,180,225,177,221,167,216,159,209,152,201,145,194,139,185,134,176,130,166,128,156,129,255,255,113,162,122,165,132,165,142,165,152,165,162,165,168,157,168,148,169,138,161,133,152,130,142,129,132,131,122,133,113,136,103,140,94,142,84,144,74,145,74,150,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints10[] = { 93,163,103,165,113,166,123,167,133,167,143,166,153,165,162,165,168,157,168,147,169,137,162,132,152,130,142,129,132,131,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,128,133,119,130,109,128,99,129,89,131,79,134,70,138,63,144,56,151,59,160,59,170,59,180,58,189,57,199,62,207,69,202,73,193,77,183,82,175,89,168,94,159,98,150,104,142,111,135,120,135,129,139,255,255,167,161,174,169,182,175,191,180,199,185,208,190,214,191,221,188,227,192,233,186,233,176,230,167,232,162,230,155,225,146,219,138,212,132,203,126,195,121,185,117,176,115,166,116,156,118,147,123,139,128,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints11[] = { 102,143,92,145,82,147,72,150,79,152,76,157,84,164,91,162,100,157,108,160,117,164,127,165,137,166,147,166,157,166,165,162,168,153,169,143,166,135,157,132,147,130,137,131,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,130,136,125,127,118,120,109,116,99,115,89,115,79,117,70,121,62,126,55,133,58,137,66,132,75,128,84,124,94,121,104,119,76,132,85,134,93,139,255,255,161,132,169,125,179,124,188,127,197,132,206,137,216,138,225,135,226,126,221,117,215,109,208,102,200,96,191,94,181,95,171,96,161,97,151,101,143,105,137,113,132,122,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144,255,255,153,126,156,118,162,111,169,105,177,101,186,100,195,100 };
uint8_t owl_framePoints12[] = { 101,143,92,145,82,147,72,149,69,153,78,152,76,156,83,163,89,164,98,158,106,158,115,163,124,165,134,166,144,166,154,166,163,163,168,155,169,145,168,136,159,132,149,130,139,130,129,133,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,130,136,123,128,116,121,109,114,102,108,92,104,82,103,72,102,62,102,53,104,43,105,33,108,24,112,17,119,26,119,36,118,46,117,56,118,66,121,74,126,81,134,89,139,99,141,255,255,159,130,161,120,165,111,170,102,175,94,181,86,188,78,194,71,201,63,203,56,194,60,186,65,178,72,171,78,162,82,152,83,143,86,134,90,125,95,119,103,114,111,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints13[] = { 102,143,92,145,82,147,72,149,69,153,78,152,76,157,83,163,90,164,98,158,106,158,115,163,125,165,135,166,145,166,155,166,163,163,168,155,169,146,168,136,159,132,149,130,139,130,129,133,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,130,136,123,128,116,121,109,114,102,108,93,103,83,100,73,98,64,97,54,96,44,96,34,97,24,99,15,103,17,108,27,110,37,111,47,113,56,115,66,118,74,124,80,132,87,138,97,141,255,255,155,130,157,120,161,111,166,102,171,94,177,85,182,77,188,69,192,60,196,50,187,53,179,59,171,65,163,72,156,78,148,84,139,90,130,94,122,100,117,108,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t owl_framePoints14[] = { 102,143,92,145,82,147,72,149,62,151,72,154,80,152,78,159,82,167,90,163,98,158,107,159,115,163,125,165,135,166,145,166,155,166,164,163,168,154,169,145,168,136,158,132,149,130,139,130,129,133,255,255,157,147,156,146,154,146,152,147,153,149,155,149,157,148,255,255,130,136,123,128,116,121,109,114,102,108,93,104,83,101,73,99,63,97,54,95,44,94,34,93,24,93,14,93,4,94,12,99,21,103,30,107,40,110,49,113,57,117,65,121,74,124,77,131,85,135,94,140,255,255,155,130,158,120,162,112,168,103,174,96,180,87,186,79,190,70,193,61,195,51,195,41,187,46,180,52,171,58,162,62,159,71,151,78,146,83,139,90,130,94,122,100,116,109,255,255,168,136,164,136,160,135,156,135,152,136,148,138,146,141,144,144 };
uint8_t* owl_frames[] = { owl_framePoints0,owl_framePoints1,owl_framePoints2,owl_framePoints3,owl_framePoints4,owl_framePoints5,owl_framePoints6,owl_framePoints7,owl_framePoints8,owl_framePoints9,owl_framePoints10,owl_framePoints11,owl_framePoints12,owl_framePoints13,owl_framePoints14 };