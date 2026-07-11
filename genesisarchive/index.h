<!DOCTYPE html>
<html lang="de">
<head>
  <meta charset="UTF-8">
  <title>Global Product Matrix — GenesisArchive</title>
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="/portal.css">
  <style>
    .grid {
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(260px, 1fr));
      gap: 1.5rem;
      margin-top: 2rem;
    }
    .card {
      background: #11151f;
      padding: 1.4rem;
      border-radius: 10px;
      border: 1px solid #1f2633;
      transition: 0.2s ease;
    }
    .card:hover {
      border-color: #7fd4ff;
      box-shadow: 0 0 12px #7fd4ff33;
    }
    .card h3 {
      margin-top: 0;
      margin-bottom: .5rem;
      font-size: 1.2rem;
    }
    .card p {
      opacity: .85;
      margin-bottom: .8rem;
    }
    .meta {
      font-size: .9rem;
      opacity: .8;
      margin-top: .5rem;
    }
    pre.manifest {
      background: #05070d;
      border-radius: 8px;
      padding: 1rem 1.2rem;
      border: 1px solid #1f2633;
      overflow-x: auto;
      font-size: .9rem;
      margin-top: 2.5rem;
    }
  </style>
</head>

<body>

<div id="header"></div>
<script>
  fetch("/header.html")
    .then(r => r.text())
    .then(h => document.getElementById("header").innerHTML = h);
</script>

<div class="wrap">

  <span class="tag">GenesisArchive</span>
  <h1>Global Product Matrix</h1>

  <p>
    Die Global Product Matrix beschreibt die kanonische Struktur aller Produkt‑
    und Forschungs‑linien der CoreCraftGenesis‑Plattform.  
    Sie ist versioniert, audit‑sealed und dient als Referenz für alle
    nachgelagerten Kataloge, Artefakte und Deployments.
  </p>

  <p class="meta">
    Version: <strong>1.0</strong><br>
    Authority: <code>manifest.corecraftgenesis.ch</code>
  </p>

  <div class="grid">

    <div class="card">
      <h3>AudioLabelLayer (ALB‑Serie)</h3>
      <p>Label‑ und Tagging‑Schicht für Audio. Klassifikatoren, Label‑Pipelines und Annotation‑Modelle.</p>
      <p class="meta">Kategorie: Audio‑Kognition · Ebene: Label‑Layer</p>
    </div>

    <div class="card">
      <h3>AudioCognitionLayer (G‑Serie)</h3>
      <p>Generative und kognitive Audio‑Modelle. Semantische Transformation, Synthese und Verstehen.</p>
      <p class="meta">Kategorie: High‑Level Cognition · Serie: G</p>
    </div>

    <div class="card">
      <h3>CognitiveDSP</h3>
      <p>Signalverarbeitung mit kognitiven Komponenten. Intelligente Filter, Effekte und Echtzeit‑DSP.</p>
      <p class="meta">Kategorie: DSP · Fokus: KI‑erweiterte Signalverarbeitung</p>
    </div>

    <div class="card">
      <h3>HyperspaceCognition</h3>
      <p>Hochdimensionale Embeddings und semantische Räume für Audio‑Daten und Feature‑Spaces.</p>
      <p class="meta">Kategorie: Embeddings · Fokus: semantische Räume</p>
    </div>

    <div class="card">
      <h3>KI‑AudioCognition</h3>
      <p>Klassische ML‑Modelle für Audio‑Erkennung, Klassifikation und Feature‑Extraktion.</p>
      <p class="meta">Kategorie: ML‑Kernmodelle · Fokus: Audio‑Analyse</p>
    </div>

    <div class="card">
      <h3>AudioCognitionTools</h3>
      <p>Tools, SDKs und CLI‑Utilities für Training, Deployment und Evaluation der Audio‑Kognition.</p>
      <p class="meta">Kategorie: Tooling · Zielgruppe: Developer & Research</p>
    </div>

    <div class="card">
      <h3>CoreCraftSystemsLegacy</h3>
      <p>Vor‑Genesis‑Systeme und Legacy‑Stacks. Dienen als Referenz und Migrations‑Quelle.</p>
      <p class="meta">Kategorie: Legacy · Rolle: Archiv & Migration</p>
    </div>

    <div class="card">
      <h3>ProductsCatalog</h3>
      <p>Meta‑Katalog aller Produktlinien. Einstiegspunkt für Navigation, Dokumentation und Discovery.</p>
      <p class="meta">Kategorie: Meta‑Layer · Rolle: Master‑Index</p>
    </div>

  </div>

  <h2 style="margin-top:3rem;">Manifest‑Ansicht</h2>
  <p>
    Die zugrunde liegende Matrix wird als YAML‑Manifest geführt und kann
    deterministisch versioniert, signiert und auditiert werden.
  </p>

  <pre class="manifest">global_product_matrix:
  version: 1.0
  authority: manifest.corecraftgenesis.ch
  catalogs:
    - AudioLabelLayer (ALB-Serie)
    - AudioCognitionLayer (G-Serie)
    - CognitiveDSP
    - HyperspaceCognition
    - KI-AudioCognition
    - AudioCognitionTools
    - CoreCraftSystemsLegacy
    - ProductsCatalog
  </pre>

</div>

</body>
</html>
