# Requirements

```
# apt install texlive-latex-base texlive-bibtex-extra texlive-latex-recommended texlive-science
```

# Build

To generate a PDF including citations and table of contents, execute the following commands:

```
pdflatex main
biber main
pdflatex main
pdflatex main
```

or use the provided Makefile