#define SYNC_WIDTH 39
#define SPC_WIDTH  47
#define TELE_WIDTH 45
#define CH_WIDTH   909
#define CH_OFFSET  (SYNC_WIDTH+SPC_WIDTH+CH_WIDTH+TELE_WIDTH)
#define IMG_WIDTH  2080
#define CHA_OFFSET (SYNC_WIDTH+SPC_WIDTH)
#define CHB_OFFSET (SYNC_WIDTH+SPC_WIDTH+CH_WIDTH+TELE_WIDTH+SYNC_WIDTH+SPC_WIDTH)
#define TOTAL_TELE (SYNC_WIDTH+SPC_WIDTH+TELE_WIDTH+SYNC_WIDTH+SPC_WIDTH+TELE_WIDTH)

#define CLIP(val, bottom, top) (val > top ? top : (val > bottom ? val : bottom))
#define CONTAINS(str, char) (strchr(str, (int) char) != NULL)