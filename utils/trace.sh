mkdir 
ffmpeg -i sm-short.mov -vf fps=6 %d.png

ffmpeg -i input.mp4 -ss 00:00:06 -t 00:00:10 -vf "scale=256:256:force_original_aspect_ratio=decrease,pad=256:256:(ow-iw)/2:(oh-ih)/2,crop=256:256" output.mp4
ffmpeg -i output.mp4 -vf fps=10 %d.png

for file in *.png(.); do
    magick "$file" "${file:r}.bmp"
done

for file in *.bmp(.); do
   autotrace -input-format BMP -output-format SVG -despeckle-level 0 -noise-removal 0 -line-threshold 0.5 -corner-always-threshold 60 -corner-surround 3 -filter-iterations 4 -tangent-surround 3 -error-threshold 2.0 -color-count 2 "$file" -output-file "${file:r}.svg"
done


