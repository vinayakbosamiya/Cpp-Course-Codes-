// binary operator overloading full explained 
/* operator Overloadin full explain*/
/*
from docx import Document
from reportlab.platypus import SimpleDocTemplate, Paragraph, Spacer
from reportlab.lib.styles import getSampleStyleSheet
from reportlab.lib.pagesizes import A4

# Content for both files
content = """
C++ Operator Overloading (Gujarati Explanation)

આ કોડમાં આપણે '+' ઓપરેટર ઓવરલોડ કરી રહ્યા છીએ જેથી આપણે આ પ્રમાણે લખી શકીએ:
d1 + d2 + d3 + d4

--------------------------------------
1️⃣ Class માં શું છે?
--------------------------------------
class data {
public:
    int num;
    data(int n){
        num = n;
    }
};

- દરેક data object પાસે એક num છે
- Example:
    data d1(2)  → d1.num = 2
    data d2(4)  → d2.num = 4

--------------------------------------
2️⃣ '+' Operator Overloading
--------------------------------------
data operator+(data d2){
    data d3(0);
    d3.num = num + d2.num;
    return d3;
}

જ્યારે આપણે લખીએ:
d1 + d2

અંદરથી થાય છે:
d1.operator+(d2)

અહીં:
- d1 → this object
- d2 → argument

--------------------------------------
3️⃣ Expression કેવી રીતે ચાલે છે?
--------------------------------------
Left to Right rule:
d1 + d2 + d3 + d4

Compiler તેને એમ બદલે છે:

(((d1.operator+(d2)).operator+(d3)).operator+(d4))

--------------------------------------
4️⃣ Step by Step Example
--------------------------------------
d1 = 2
d2 = 4
d3 = 6
d4 = 8

Step-1:
2 + 4 = 6

Step-2:
6 + 6 = 12

Step-3:
12 + 8 = 20

Final result:
r = 20

--------------------------------------
Final Summary:
--------------------------------------
- Operator overloading ડાબેથી જમણે ચાલે છે
- દરેક '+' ઓપરેશન નવો object બનાવે છે
- અંતે result r.num = 20 મળે છે
"""

# Create DOCX
doc = Document()
for line in content.split("\n"):
    doc.add_paragraph(line)
docx_path = "/mnt/data/operator_overload_explanation.docx"
doc.save(docx_path)

# Create PDF
pdf_path = "/mnt/data/operator_overload_explanation.pdf"
styles = getSampleStyleSheet()
story = []
doc_pdf = SimpleDocTemplate(pdf_path, pagesize=A4)

for line in content.split("\n"):
    story.append(Paragraph(line, styles["Normal"]))
    story.append(Spacer(1, 12))

doc_pdf.build(story)

docx_path, pdf_path



Note:- some operator is not overloading in c++ like:
1. scope resolution operator        (::)
2. member Access Operator           (.)
3. pointer-to-member operator       (.)*
4. conditional or Ternary Operator  (?:)
5. sizeOf Operator                  (sizeof)
6. object type opereator            (typeid)
*/
